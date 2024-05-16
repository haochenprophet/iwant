#ifndef BUILD_MAKEFILE_H
#define BUILD_MAKEFILE_H

#include "object/object.h"

namespace n_build_makefile {

	class Cmakefile_block
	{
	public:
		string targets;
		string dependents;
		string commands;
	};

	typedef std::list<Cmakefile_block> list_makefile_block;
	typedef std::list<string> list_makefile_define;

	class Cbuild_makefile :public Object
	{
	public:
		list_makefile_define define_list;
 		list_makefile_block block_list;
	public:
		Cbuild_makefile();
		~Cbuild_makefile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cbuild_makefile); }
	public:
		void add_define(string s_def);
		void add_block(Cmakefile_block block);
		int  display();
	};
}

using namespace n_build_makefile;

#endif
