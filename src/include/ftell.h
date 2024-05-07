#ifndef FTELL_H
#define FTELL_H

#include "../object.h"

namespace n_ftell {
	class Cftell :public Object
	{
	public:
		Cftell();
		~Cftell();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cftell); }
		static long int ftell_c(FILE* stream);

	};
}

using namespace n_ftell;

#endif
