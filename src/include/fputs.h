#ifndef FPUTS_H
#define FPUTS_H

#include "../object.h"

namespace n_fputs {
	class Cfputs :public Object
	{
	public:
		Cfputs();
		~Cfputs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfputs); }
		static int fputs_c(const char* str, FILE* stream);

	};
}

using namespace n_fputs;

#endif
