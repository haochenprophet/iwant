#ifndef LLDIV_H
#define LLDIV_H

#include "object/object.h"

namespace n_lldiv {
	class Clldiv :public Object
	{
	public:
		Clldiv();
		~Clldiv();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clldiv); }
		static lldiv_t lldiv_c(long long int numer, long long int denom);

	};
}

using namespace n_lldiv;

#endif
