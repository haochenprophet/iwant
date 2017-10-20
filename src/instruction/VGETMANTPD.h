#ifndef VGETMANTPD_H
#define VGETMANTPD_H

#include "object.h"

namespace n_VGETMANTPD {
	class CVGETMANTPD :public Object
	{
	public:
		CVGETMANTPD();
		~CVGETMANTPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETMANTPD;

#endif
