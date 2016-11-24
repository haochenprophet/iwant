#include "class.h"

int Cclass::my_init(void *p)
{
	this->name = "Cclass";
	this->alias = "class";
	this->syntax = CLASS_SYNTAX;
	this->temp = CLASS_H_TEMP;	
	return 0;
}

Cclass::Cclass()
{
	this->my_init();
}

Cclass::Cclass(string tag)
{
	this->my_init();
	this->tag = tag;
}

Cclass::~Cclass()
{
	this->base_list.clear();
	this->member_list.clear();
	this->func_list.clear();
}


int Cclass::func(void *p)
{
	cout << this->syntax;
	return 0;
}

int Cclass::create(void *p)
{
	if (!p) return -1;

	return 0;
}

#ifndef CLASS_TEST
#define CLASS_TEST 0//1
#endif

#if CLASS_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "CLASS_TEST\n\n";

	Cclass c;
	c.my_syntax();
//	c.my_temp();

	Ctag t;
	t.my_syntax();


	Cmain m;
	m.my_temp();

	Cmake mk;
	mk.my_syntax();
	

	return 0;
}
#endif 
