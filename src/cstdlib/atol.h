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
	};
}

using namespace n_atol;

#endif
