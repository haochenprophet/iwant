#ifndef FCOMIP_H
#define FCOMIP_H

#include "object.h"

namespace n_FCOMIP {
	class CFCOMIP :public Object
	{
	public:
		CFCOMIP();
		~CFCOMIP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOMIP;

#endif
