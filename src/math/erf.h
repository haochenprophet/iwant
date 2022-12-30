#ifndef ERF_H
#define ERF_H

#include "../object.h"

namespace n_erf {
	class Cerf :public Object
	{
	public:
		Cerf();
		~Cerf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cerf); }
	};
}

using namespace n_erf;

#endif
