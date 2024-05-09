#ifndef MAIN_H
#define MAIN_H

#include "file/file.h"

namespace n_main {
	class Cmain :public Cfile
	{
	public:
		Cmain();
		int my_init(void *p=nullptr);
		int is_exist_main(char *f_name);
		int create_main_cmd(int argc, char *argv[]);
		int do_action(void * a=nullptr);
		int deal_cmd(int argc, char *argv[]);
	};

}
using namespace n_main;

#endif
