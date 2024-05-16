#ifndef FCLOSE_H
#define FCLOSE_H

#include "object/object.h"

namespace n_fclose {
	class Cfclose :public Object
	{
	public:
		Cfclose();
		~Cfclose();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfclose); }
		static int fclose_c(FILE* stream);
	};
}

using namespace n_fclose;

#endif
