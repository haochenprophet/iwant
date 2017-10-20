#ifndef VPERMD_H
#define VPERMD_H

#include "object.h"

namespace n_VPERMD {
	class CVPERMD :public Object
	{
	public:
		CVPERMD();
		~CVPERMD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMD;

#endif
