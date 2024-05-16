#ifndef UNGETC_H
#define UNGETC_H

#include "object/object.h"

namespace n_ungetc {
	class Cungetc :public Object
	{
	public:
		Cungetc();
		~Cungetc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cungetc); }
		static int ungetc_c(int character, FILE* stream);

	};
}

using namespace n_ungetc;

#endif
