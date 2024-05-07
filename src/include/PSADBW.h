#ifndef PSADBW_H
#define PSADBW_H

#include "../object.h"

namespace n_PSADBW {
	class CPSADBW :public Object
	{
	public:
		CPSADBW();
		~CPSADBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSADBW;

#endif
