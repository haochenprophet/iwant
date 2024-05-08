#ifndef LODS_H
#define LODS_H

#include "../object.h"

namespace n_LODS {
	class CLODS :public Object
	{
	public:
		CLODS();
		~CLODS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LODS;

#endif
