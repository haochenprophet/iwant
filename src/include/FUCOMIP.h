#ifndef FUCOMIP_H
#define FUCOMIP_H

#include "../object.h"

namespace n_FUCOMIP {
	class CFUCOMIP :public Object
	{
	public:
		CFUCOMIP();
		~CFUCOMIP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FUCOMIP;

#endif
