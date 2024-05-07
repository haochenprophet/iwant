#ifndef FEOF_H
#define FEOF_H

#include "../object.h"

namespace n_feof {
	class Cfeof :public Object
	{
	public:
		Cfeof();
		~Cfeof();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfeof); }
		static int feof_c(FILE* stream);
	};
}

using namespace n_feof;

#endif
