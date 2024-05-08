#ifndef VSCANF_H
#define VSCANF_H

#include "../object.h"

namespace n_vscanf {
	class Cvscanf :public Object
	{
	public:
		Cvscanf();
		~Cvscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvscanf); }
		static int vscanf_c(const char* format, va_list arg);

	};
}

using namespace n_vscanf;

#endif
