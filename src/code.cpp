#include "code.h"
int Ccode::my_init(void *p)
{
	this->name = "Ccode";
	this->alias = "code";
	this->temp = GLOBAL_CLASS_TEMP;
	this->s_tag = "[tag]";
	this->s_cpp_tag = ".cpp";
	this->s_cpp_rep = " ";//not empty, can use one space
	this->st = "";
	this->f_name_h = GLOBAL_CODE;
	this->f_name_h += ".h";
	this->f_nam_cpp = GLOBAL_CODE;
	this->f_nam_cpp += ".i";
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

int Ccode::func(void *p)//this ext function for object class and should be optimization
{
	if (!p) return -1;
	this->st= GLOBAL_CLASS_TEMP;//global_class string template
	this->sp = (string *)p;
	this->s_replace(this->sp,&this->s_cpp_tag,&this->s_cpp_rep);//	cout << *this->sp<<endl;//test ok
	this->s_replace(&this->st, &this->s_tag, this->sp);// this->sp= clas name
	cout << this->st;//test
	this->se = EXTERN_KEYWOED;
	this->se += this->st;
	cout << this->se;//test
	//this->f_append(&this->f_name_h, &this->se); //extern Cclass class; //test error
	//this->f_append(&this->f_nam_cpp,&this->st);//Cclass class; //test error
	return 0;
}

int Ccode::create(char * cp)//cp point class name
{
	if(cp==nullptr) return -1;
	
	cout<<cp<<endl;//test

	return 0;
}

int Ccode::deal_cmd(int argc, char *argv[])
{
	Cpath p;
	p.s_term = this->s_term;
	//this->f_append(this->f_nam_cpp, (char *)"#include \"all_h_include.h\"\n\n");//Cclass class; //test
	do {
		argc--;if (argc<1)	break;
		p.s_url = argv[argc];
		p.list_s(0);
		p.execute((Object *)this);//p->execute c->func  ,Cross-class execute method
	} while (argc>0);
	return -1;
}

#ifndef CODE_TEST
#define CODE_TEST 01
#endif

#if CODE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	//cout << "CODE_TEST\n\n";
	Ccode c;
	argc = 2;
#if WINDOWS_OS
	argv[1] = "../../src";// windows dir //test 
#endif

 #if LINUX_OS
		argv[1] = (char *)".";//linux dir
#endif

	return c.deal_cmd(argc,argv);
}
#endif 