#ifndef GETC_H
#define GETC_H

#include "../object.h"

namespace n_getc {
	class Cgetc :public Object
	{
	public:
		Cgetc();
		~Cgetc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cgetc); }
		static int getc_c(FILE* stream);
	};
}

using namespace n_getc;

#endif
