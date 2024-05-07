#ifndef FCOS_H
#define FCOS_H

#include "../object.h"

namespace n_FCOS {
	class CFCOS :public Object
	{
	public:
		CFCOS();
		~CFCOS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOS;

#endif
