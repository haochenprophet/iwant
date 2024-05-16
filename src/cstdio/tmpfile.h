#ifndef TMPFILE_H
#define TMPFILE_H

#include "object/object.h"

namespace n_tmpfile {
	class Ctmpfile :public Object
	{
	public:
		Ctmpfile();
		~Ctmpfile();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctmpfile); }
		static FILE* tmpfile_c(void);

	};
}

using namespace n_tmpfile;

#endif
