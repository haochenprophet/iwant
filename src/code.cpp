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
	this->code_buf = nullptr;
	return 0;
}

Ccode::Ccode()
{
	this->my_init();
	if (0 == this->allot((int)CODE_BUF_LEN, (void **)&this->code_buf)) exit(-1);//allot memory fail
}

Ccode::~Ccode()
{
	this->delete_allot((void **)&this->code_buf);
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

int Ccode::set_package_action(void *p)
{
	if (!(this->action&(ACTION_T)CodeAtcion::set_package)) return -1;
	if (this->package.length() < 1) return -1;

	this->file_h.f_name = this->package+"_"+GLOBAL_CODE_H;
	this->file_cpp.f_name = this->package + "_"+GLOBAL_CODE_I;
	this->file_func.f_name = this->package + "_"+GLOBAL_CODE_FUNC_I;
	return 0;
}

int Ccode::create_action(void *p)
{
	if (!p) return -1;
	this->st = GLOBAL_CLASS_TEMP;//global_class string template
	this->sp = (string *)p;
	this->s_replace(this->sp, &this->s_cpp_tag, &this->s_cpp_rep);//	std::cout << *this->sp<<endl;//test ok
	this->s_replace(&this->st, &this->s_tag, this->sp);// this->sp= clas name

	if (this->action&(ACTION_T)CodeAtcion::create_c)
	{
		std::cout << this->st;//test
		this->file_cpp.f_append(&this->st);//Cclass class; //test ok
	}

/*//remove create  extern to .h file
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		this->se = EXTERN_KEYWOED;
		this->se += this->st;//	std::cout << this->se;//test ok
		this->file_h.f_append(&this->se); //extern Cclass class; //test ok
	}
*/
	if (this->action&(ACTION_T)CodeAtcion::create_func) {
		this->st = ADD_ME_TEMP;//note change tag template
		this->sp = (string *)p;//*.cpp
		this->s_replace(this->sp, &this->s_cpp_tag, &this->s_cpp_rep);//	std::cout << *this->sp<<endl;//test ok
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
	
	std::cout<<cp<<endl;//test

	return 0;
}

void Ccode::create_head()
{
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		this->file_h.create();

		if (this->action&(ACTION_T)CodeAtcion::set_package)
		{
			sprintf(this->code_buf, G_CODE_H_DEFINE_PACKAGE,this->upper_str.c_str(), this->upper_str.c_str());//package upper
			this->file_h.f_append(this->code_buf);//Cclass class; //test
			sprintf(this->code_buf, G_CODE_ALL_H_PACKAGE, this->package.c_str());
			this->file_h.f_append(this->code_buf);
		}
		else
		{
			this->file_h.f_append((char *)G_CODE_H_DEFINE);//Cclass class; //test
			this->file_h.f_append((char *)G_CODE_ALL_H);
		}

	}

	if (this->action&(ACTION_T)CodeAtcion::create_c)	{
		this->file_cpp.create();//create file

		if (this->action&(ACTION_T)CodeAtcion::set_package)
		{
			sprintf(this->code_buf, G_CODE_I_DEFINE_PACKAGE, this->upper_str.c_str(),this->upper_str.c_str());
			this->file_cpp.f_append(this->code_buf);//Cclass class; //test
			sprintf(this->code_buf, G_CODE_ALL_H_PACKAGE, this->package.c_str());
			this->file_cpp.f_append(this->code_buf);
		}
		else
		{
			this->file_cpp.f_append((char *)G_CODE_I_DEFINE);
			this->file_cpp.f_append((char *)G_CODE_ALL_H);//Cclass class; //test
		}
	}

	if (this->action&(ACTION_T)CodeAtcion::create_func) {
		this->file_func.create();


		if (this->action&(ACTION_T)CodeAtcion::set_package)
		{
			sprintf(this->code_buf, G_CODE_FUNC_I_DEFINE_PACKAGE,this->upper_str.c_str(),this->upper_str.c_str());
			this->file_func.f_append(this->code_buf);//Cclass class; //test
			sprintf(this->code_buf, G_CODE_ADD_OBJECT_PACKAGE, this->package.c_str());
			this->file_func.f_append(this->code_buf);
		}
		else
		{
			this->file_func.f_append((char *)G_CODE_FUNC_I_DEFINE);
			this->file_func.f_append((char *)G_CODE_ADD_OBJECT);
		}
	}

}

void Ccode::create_tail()
{
	if (this->action&(ACTION_T)CodeAtcion::create_h) {
		
		if (this->action&(ACTION_T)CodeAtcion::create_func) {
			if (this->action&(ACTION_T)CodeAtcion::set_package)
			{
				sprintf(this->code_buf, G_CODE_ADD_OBJECT_H_PACKAGE,this->package.c_str());
				this->file_h.f_append(this->code_buf);//Cclass class; //test
			}
			else
			{
				this->file_h.f_append((char *)G_CODE_ADD_OBJECT_H);//h
			}
		}

		this->file_h.f_append((char *)"#endif\n");//G_CODE_FUNC_I
	}

	if (this->action&(ACTION_T)CodeAtcion::create_c){
		this->file_cpp.f_append((char *)"\t#include \"");//is
		if (this->action&(ACTION_T)CodeAtcion::set_package)
		{
			sprintf(this->code_buf, GLOBAL_CODE_FUNC_I_PACKAGE, this->package.c_str());
			this->file_cpp.f_append(this->code_buf);//Cclass class; //test
		}
		else
		{
			this->file_cpp.f_append((char *)GLOBAL_CODE_FUNC_I);//#include "g_code_func.i"
		}
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
	this->set_package_action();//package_file_name
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
	//this->list_cmd(argc, argv);//test
	if (argc < 2)	return this->help();
	//get action
	if (argc < 4) this->action = ((int)CodeAtcion::create_c | (int)CodeAtcion::create_func | (int)CodeAtcion::create_h);
	if (this->action == 0) this->action = this->get_action(code_action, (int)CODE_ACTION_COUNT, argv[3]);
	if (this->action == 0) this->action = atoll(argv[3]);//no name 
	if (this->action == 0) return -1;
	if (argc > 2) {
		this->action |= (ACTION_T)CodeAtcion::set_package;
		this->package = argv[2];//<pack_name>
		this->set_upper_str(this->package);//uper_package
	 }
	if (this->action&(ACTION_T)CodeAtcion::create_h || this->action&(ACTION_T)CodeAtcion::create_c || this->action&(ACTION_T)CodeAtcion::create_func)
	{
		this->init_file(argv[1]);//add path
		this->create_cmd(argc, argv);
	}

	return 0;
}

int Ccode::help(void *p)
{
	printf("Usage:Ccode <src_path> <pack_name> <action>\nExample: Code ../src/ cstdio\n");
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
	std::cout << "CODE_TEST\n\n";
	Ccode c;
	add_objects(&c);
	if (argc < 2) { c.my_family(); return -1; }
	c.dispatch_cmd(argc, argv);
	return 0;
/*
	if (argc < 2)	return c.help();
    c.action = (ACTION_T)CodeAtcion::create_h + (ACTION_T)CodeAtcion::create_c + (ACTION_T)CodeAtcion::create_func;
	return c.deal_cmd(argc,argv);
*/
}
#endif 