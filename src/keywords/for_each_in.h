#ifndef FOR_EACH_IN_H
#define FOR_EACH_IN_H

#include "object.h"

namespace n_for_each_in {
	class Cfor_each_in :public Object
	{
	public:
		Cfor_each_in();
		int my_init(void *p=nullptr);
	};
}

using namespace n_for_each_in;

#endif
