#ifndef VGETMANTSS_H
#define VGETMANTSS_H

#include "object/object.h"

namespace n_VGETMANTSS {
	class CVGETMANTSS :public Object
	{
	public:
		CVGETMANTSS();
		~CVGETMANTSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETMANTSS;

#endif
