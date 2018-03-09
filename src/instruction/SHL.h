#ifndef SHL_H
#define SHL_H

#include "../object.h"

namespace n_SHL {
	class CSHL :public Object
	{
	public:
		CSHL();
		~CSHL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHL;

#endif
