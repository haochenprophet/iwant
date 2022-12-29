#ifndef ATOL_H
#define ATOL_H

#include "../object.h"

namespace n_atol {
	class Catol :public Object
	{
	public:
		Catol();
		~Catol();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Catol); }
	};
}

using namespace n_atol;

#endif
