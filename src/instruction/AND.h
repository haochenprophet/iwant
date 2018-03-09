#ifndef AND_H
#define AND_H

#include "../object.h"

namespace n_AND {
	class CAND :public Object
	{
	public:
		CAND();
		~CAND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AND;

#endif
