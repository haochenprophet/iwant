#ifndef COS_H
#define COS_H

#include "../object.h"

namespace n_cos {
	class Ccos :public Object
	{
	public:
		Ccos();
		~Ccos();
		int my_init(void *p=nullptr);
	};
}

using namespace n_cos;

#endif
