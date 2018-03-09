#ifndef ADCX_H
#define ADCX_H

#include "../object.h"

namespace n_ADCX {
	class CADCX :public Object
	{
	public:
		CADCX();
		~CADCX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADCX;

#endif
