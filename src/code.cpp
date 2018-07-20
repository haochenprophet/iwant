#include "code.h"
#include "code_action.i"

int Ccode::my_init(void *p)
{
	this->name = "Ccode";
	this->alias = "code";
	this->temp = GLOBAL_CLASS_TEMP;
	this->s_tag = "[tag]";
	this->s_cpp_tag = ".cpp";
	this->s_cpp_rep = " ";//not empty, can use one space
	this->st = "";
	this->init_file();
	this->se = EXTERN_KEYWOED;
	this->s_term= ".cpp";
	return 0;
}

Ccode::Ccode()
{
	this->my_init();
}

Ccode::~Ccode()
{

}

int Ccode::init_file(char * url )
{
	if (url)//init path
	{
		this->file_h.f_name = url;
		this->file_cpp.f_name = url;
		this->file_func.f_name = url;
		this->file_h.f_name += GLOBAL_CODE_H;
		this->file_cpp.f_name += GLOBAL_CODE_I;
		this->file_func.f_name += GLOBAL_CODE_FUNC_I;
		return 0;
	}

	this->file_h.f_name = GLOBAL_CODE_H;
	this->file_cpp.f_name = GLOBAL_CODE_I;
	this->file_func.f_name = GLOBAL_CODE_FUNC_I;
	return 0;
}

int Ccode::create_action(void *p)
{
	if (!p) return -1;
	this->st = GLOBAL_CLASS_TEMP;//global_class string template
	this->sp = (string *)p;
	this->s_replace(this->sp, &this->s_cpp_tag, &this->s_cpp_rep);//	cout << *this->sp<<endl;//test ok
	this->s_replace(&this->st, &this->s_tag, this->sp);// this->sp= clas name

	if (this->action&(ACTION_T)CodeAtcion::create_c)
	{
		cout << this->st;//test
		this->file_cpp.f_append(&this->st);//Cclass class; //test ok
	}

/*//remove create  extern to .h file
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		this->se = EXTERN_KEYWOED;
		this->se += this->st;//	cout << this->se;//test ok
		this->file_h.f_append(&this->se); //extern Cclass class; //test ok
	}
*/
	if (this->action&(ACTION_T)CodeAtcion::create_func) {
		this->st = ADD_ME_TEMP;//note change tag template
		this->sp = (string *)p;//*.cpp
		this->s_replace(this->sp, &this->s_cpp_tag, &this->s_cpp_rep);//	cout << *this->sp<<endl;//test ok
		this->s_replace(&this->st, &this->s_tag, this->sp);// this->sp= clas name
		this->s_replace(&this->st, (char*)" .", (char *)".");// replace " .where()" to ".where()"
		this->file_func.f_append(&this->st);//p->addMe(g_[tag].where());
	}
	return 0;
}

int Ccode::func(void *p)//this ext function for object class and should be optimization
{
	if (this->action&(ACTION_T)CodeAtcion::create_h || this->action&(ACTION_T)CodeAtcion::create_c || this->action&(ACTION_T)CodeAtcion::create_func)
	{
		this->create_action(p);
	}

	return 0;
}

int Ccode::create(char * cp)//cp point class name
{
	if(cp==nullptr) return -1;
	
	cout<<cp<<endl;//test

	return 0;
}

void Ccode::create_head()
{
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		this->file_h.create();
		this->file_h.f_append((char *)G_CODE_H_DEFINE);//Cclass class; //test
		this->file_h.f_append((char *)"\t#include \"all_h_include.h\"\n");
	}

	if (this->action&(ACTION_T)CodeAtcion::create_c)	{
		this->file_cpp.create();//create file
		this->file_cpp.f_append((char *)G_CODE_I_DEFINE);
		this->file_cpp.f_append((char *)"\t#include \"all_h_include.h\"\n\n");//Cclass class; //test
	}

	if (this->action&(ACTION_T)CodeAtcion::create_func) {
		this->file_func.create();
		this->file_func.f_append((char *)G_CODE_FUNC_I_DEFINE);
		this->file_func.f_append((char *)"void add_objects(Object *p)\n{\n");
	}

}

void Ccode::create_tail()
{
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		
		if (this->action&(ACTION_T)CodeAtcion::create_func) {
			this->file_h.f_append((char *)"\tvoid add_objects(Object *p);\n");//h
		}

		this->file_h.f_append((char *)"#endif\n");//G_CODE_FUNC_I
	}

	if (this->action&(ACTION_T)CodeAtcion::create_c){
		this->file_cpp.f_append((char *)"\t#include \"");//is
		this->file_cpp.f_append((char *)GLOBAL_CODE_FUNC_I);//#include "g_code_func.i"
		this->file_cpp.f_append((char *)"\"\n#endif\n");//is
	}

	if (this->action&(ACTION_T)CodeAtcion::create_func) {
		this->file_func.f_append((char *)"\n}\n");
		this->file_func.f_append((char *)"#endif\n");//i
	}
}

int Ccode::create_cmd(int argc, char *argv[])
{
	Cpath p;
	p.s_term = this->s_term;
	this->create_head();
	do {
		argc--; if (argc<1)	break;
		p.s_url = argv[argc];
		p.list_s(0);
		p.execute((Object *)this);//p->execute c->func  ,Cross-class execute method
	} while (argc>0);
	this->create_tail();
	return 0;
}

int Ccode::deal_cmd(int argc, char *argv[])
{
	if (argc < 2)	return this->help();
	//get action
	this->action = this->get_action(code_action, (int)CODE_ACTION_COUNT, argv[2]);
	if (this->action == 0) this->action = atoll(argv[2]);//no name 
	if (this->action == 0) return -1;

	if (this->action&(ACTION_T)CodeAtcion::create_h || this->action&(ACTION_T)CodeAtcion::create_c || this->action&(ACTION_T)CodeAtcion::create_func)
	{
		this->init_file(argv[1]);//add path
		this->create_cmd(argc, argv);
	}

	return 0;
}

int Ccode::help(void *p)
{
	printf("Usage:Ccode <src_path> <action>\n");
	this->action_help(code_action, (int)CODE_ACTION_COUNT);
	return 0;
}

#ifndef CODE_TEST
#define CODE_TEST 0//1
#endif

#if CODE_TEST
#include "g_code.i"
int main(int argc, char *argv[])
{
	cout << "CODE_TEST\n\n";
	Ccode c;
	add_objects(&c);
	c.my_family();
	c.dispatch_cmd(argc, argv);
	return 0;
/*
	if (argc < 2)	return c.help();
    c.action = (ACTION_T)CodeAtcion::create_h + (ACTION_T)CodeAtcion::create_c + (ACTION_T)CodeAtcion::create_func;
	return c.deal_cmd(argc,argv);
*/
}
#endif 