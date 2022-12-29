#ifndef STRTOL_H
#define STRTOL_H

#include "../object.h"

namespace n_strtol {
	class Cstrtol :public Object
	{
	public:
		Cstrtol();
		~Cstrtol();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtol); }
	};
}

using namespace n_strtol;

#endif
