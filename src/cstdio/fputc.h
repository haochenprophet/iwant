#ifndef FPUTC_H
#define FPUTC_H

#include "object/object.h"

namespace n_fputc {
	class Cfputc :public Object
	{
	public:
		Cfputc();
		~Cfputc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfputc); }
		static int fputc_c(int character, FILE* stream);

	};
}

using namespace n_fputc;

#endif
