#ifndef VDBPSADBW_H
#define VDBPSADBW_H

#include "../object.h"

namespace n_VDBPSADBW {
	class CVDBPSADBW :public Object
	{
	public:
		CVDBPSADBW();
		~CVDBPSADBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VDBPSADBW;

#endif
