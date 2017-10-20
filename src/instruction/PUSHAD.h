#ifndef PUSHAD_H
#define PUSHAD_H

#include "object.h"

namespace n_PUSHAD {
	class CPUSHAD :public Object
	{
	public:
		CPUSHAD();
		~CPUSHAD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSHAD;

#endif
