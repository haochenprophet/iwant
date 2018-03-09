#ifndef VGETMANTPS_H
#define VGETMANTPS_H

#include "../object.h"

namespace n_VGETMANTPS {
	class CVGETMANTPS :public Object
	{
	public:
		CVGETMANTPS();
		~CVGETMANTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETMANTPS;

#endif
