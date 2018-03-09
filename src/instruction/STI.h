#ifndef STI_H
#define STI_H

#include "../object.h"

namespace n_STI {
	class CSTI :public Object
	{
	public:
		CSTI();
		~CSTI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STI;

#endif
