#ifndef LFENCE_H
#define LFENCE_H

#include "../object.h"

namespace n_LFENCE {
	class CLFENCE :public Object
	{
	public:
		CLFENCE();
		~CLFENCE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LFENCE;

#endif
