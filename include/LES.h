#ifndef LES_H
#define LES_H

#include "../object.h"

namespace n_LES {
	class CLES :public Object
	{
	public:
		CLES();
		~CLES();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LES;

#endif
