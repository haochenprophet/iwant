#ifndef CLASS_H
#define CLASS_H

#include "file.h"
/*
keyword:  class

 [template_spec]   
 class [decl_spec] tag [: base_list ]  
{
	[member_list]
	[func_list]
} [declarators];  
[ class ] tag declarators;
*/

namespace n_class {
	class Cclass :public Cfile
	{
	public:
		string template_spec;
		string decl_spec;
		string tag;
		string declarators;
		std::list<string *> base_list;//base class list 

		std::list<string *> member_list;//base class list 
		std::list<string *> func_list;//base class list 

		string cpp_temp;
	public:
		Cclass();
		Cclass(string tag);
		~Cclass();

		int my_init(void *p=nullptr);
		int func(void *p=nullptr);
		int create(void *p);//Cclass *p

		int deal_cmd(int argc, char *argv[]);	
	};

}
using namespace n_class;

#endif
