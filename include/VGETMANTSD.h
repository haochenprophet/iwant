#ifndef VGETMANTSD_H
#define VGETMANTSD_H

#include "../object.h"

namespace n_VGETMANTSD {
	class CVGETMANTSD :public Object
	{
	public:
		CVGETMANTSD();
		~CVGETMANTSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETMANTSD;

#endif
