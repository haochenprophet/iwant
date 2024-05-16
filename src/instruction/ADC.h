#ifndef ADC_H
#define ADC_H

#include "object/object.h"

namespace n_ADC {
	class CADC :public Object
	{
	public:
		CADC();
		~CADC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADC;

#endif
