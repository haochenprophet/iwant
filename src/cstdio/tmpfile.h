#ifndef TMPFILE_H
#define TMPFILE_H

#include "../object.h"

namespace n_tmpfile {
	class Ctmpfile :public Object
	{
	public:
		Ctmpfile();
		~Ctmpfile();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tmpfile;

#endif
