#ifndef COMISS_H
#define COMISS_H

#include "../object.h"

namespace n_COMISS {
	class CCOMISS :public Object
	{
	public:
		CCOMISS();
		~CCOMISS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_COMISS;

#endif
