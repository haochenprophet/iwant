#ifndef VPERMI2D_H
#define VPERMI2D_H

#include "../object.h"

namespace n_VPERMI2D {
	class CVPERMI2D :public Object
	{
	public:
		CVPERMI2D();
		~CVPERMI2D();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMI2D;

#endif
