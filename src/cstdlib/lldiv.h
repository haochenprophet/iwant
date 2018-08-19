#ifndef LLDIV_H
#define LLDIV_H

#include "../object.h"

namespace n_lldiv {
	class Clldiv :public Object
	{
	public:
		Clldiv();
		~Clldiv();
		int my_init(void *p=nullptr);
	};
}

using namespace n_lldiv;

#endif
