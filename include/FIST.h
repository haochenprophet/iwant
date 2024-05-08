#ifndef FIST_H
#define FIST_H

#include "../object.h"

namespace n_FIST {
	class CFIST :public Object
	{
	public:
		CFIST();
		~CFIST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FIST;

#endif
