#ifndef VREDUCESD_H
#define VREDUCESD_H

#include "object.h"

namespace n_VREDUCESD {
	class CVREDUCESD :public Object
	{
	public:
		CVREDUCESD();
		~CVREDUCESD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VREDUCESD;

#endif
