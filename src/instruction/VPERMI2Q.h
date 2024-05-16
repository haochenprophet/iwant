#ifndef VPERMI2Q_H
#define VPERMI2Q_H

#include "object/object.h"

namespace n_VPERMI2Q {
	class CVPERMI2Q :public Object
	{
	public:
		CVPERMI2Q();
		~CVPERMI2Q();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMI2Q;

#endif
