#include "build_makefile.h"
int Cbuild_makefile::my_init(void *p)
{
	this->name = "Cbuild_makefile";
	this->alias = "build_makefile";
	return 0;
}

Cbuild_makefile::Cbuild_makefile()
{
	this->my_init();
}

Cbuild_makefile::~Cbuild_makefile()
{
	this->block_list.clear();
}

void Cbuild_makefile::add_define(string s_def)
{
	this->define_list.push_back(s_def);
}

void Cbuild_makefile::add_block(Cmakefile_block block)
{
	this->block_list.push_back(block);
}

int  Cbuild_makefile::display()
{
	if (this->block_list.empty()) return -1;

	list_makefile_define::iterator it_def;
	for (it_def = this->define_list.begin(); it_def != this->define_list.end(); ++it_def)
	{
		std::cout << (*it_def) << endl;
	}
	std::cout << endl;
	list_makefile_block::iterator it;
	for (it = this->block_list.begin(); it != this->block_list.end(); ++it)
	{
		std::cout <<(*it).targets << " : "<< (*it).dependents << endl << "\t" << (*it).commands <<endl;
	}

	return 0;
}

#ifndef BUILD_MAKEFILE_TEST
#define BUILD_MAKEFILE_TEST 0//1
#endif

#if BUILD_MAKEFILE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	Cbuild_makefile build_makefile;

	string s_def;
	Cmakefile_block block;

	//tag
	s_def = "MK_TAG = database";
	build_makefile.add_define(s_def);

	//cflag
	s_def = "CFLAGS += -std=gnu++11";
	build_makefile.add_define(s_def);

	//all
	block.targets = "all";
	block.dependents = "";
	block.commands = "g++ $(CFLAGS)";
	build_makefile.add_block(block);

	//claen
	block.targets = "clean";
	block.dependents = "";
	block.commands = "rm -f $(MK_TAG) *.o *~ .*.swp";
	build_makefile.add_block(block);
	
	build_makefile.display();

	return 0;
}
#endif
