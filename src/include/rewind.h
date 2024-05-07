#ifndef REWIND_H
#define REWIND_H

#include "../object.h"

namespace n_rewind {
	class Crewind :public Object
	{
	public:
		Crewind();
		~Crewind();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crewind); }
		static void rewind_c(FILE* stream);

	};
}

using namespace n_rewind;

#endif
