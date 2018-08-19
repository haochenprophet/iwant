#ifndef WCTOMB_H
#define WCTOMB_H

#include "../object.h"

namespace n_wctomb {
	class Cwctomb :public Object
	{
	public:
		Cwctomb();
		~Cwctomb();
		int my_init(void *p=nullptr);
	};
}

using namespace n_wctomb;

#endif
