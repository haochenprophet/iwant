#ifndef AND_H
#define AND_H

#include "object/object.h"

namespace n_AND {
	class CAND_I :public Object
	{
	public:
		CAND_I();
		~CAND_I();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AND;

#endif
