#ifndef CLEARERR_H
#define CLEARERR_H

#include "object/object.h"

namespace n_clearerr {
	class Cclearerr :public Object
	{
	public:
		Cclearerr();
		~Cclearerr();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cclearerr); }
		static void clearerr_c(FILE* stream);
	};
}

using namespace n_clearerr;

#endif
