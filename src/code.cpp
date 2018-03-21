#include "code.h"
int Ccode::my_init(void *p)
{
	this->name = "Ccode";
	this->alias = "code";
	this->temp = GLOBAL_CLASS_TEMP;
	this->s_tag = "[tag]";
	this->s_cpp_tag = ".cpp";
	this->s_cpp_rep = " ";//not empty, can use one space
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
	string st= GLOBAL_CLASS_TEMP;//global_class string template
	this->sp = (string *)p;
	this->s_replace(this->sp,&this->s_cpp_tag,&this->s_cpp_rep);//	cout << *this->sp<<endl;//test ok
	this->s_replace(&st, &this->s_tag, this->sp);// this->sp= clas name
	cout << st;
	return 0;
}

int Ccode::create(char * cp)//cp point class name
{
	if(cp==nullptr) return -1;
	
	cout<<cp<<endl;//test

	return 0;
}

#ifndef CODE_TEST
#define CODE_TEST 01
#endif

#if CODE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
//	cout << "CODE_TEST\n\n";

#if WINDOWS_OS
	DIR_T *dir = L"../../src";//windows dir 
	DIR_T *term = L".cpp";
#endif

#if LINUX_OS
	DIR_T *dir = (DIR_T *) ".";//linux dir 
	DIR_T *term =(DIR_T *) ".cpp";
#endif

	Cpath p;
	Ccode c;
	p.list(dir, term, 0);
	cout<<"#include \"all_h_include.h\"\n\n";
	p.execute((Object *)&c);//p->execute c->func  ,Cross-class execute method

	return 0;
}
#endif 