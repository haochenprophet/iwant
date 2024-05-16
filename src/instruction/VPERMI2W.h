#ifndef VPERMI2W_H
#define VPERMI2W_H

#include "object/object.h"

namespace n_VPERMI2W {
	class CVPERMI2W :public Object
	{
	public:
		CVPERMI2W();
		~CVPERMI2W();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMI2W;

#endif
