#ifndef PSHUFLW_H
#define PSHUFLW_H

#include "../object.h"

namespace n_PSHUFLW {
	class CPSHUFLW :public Object
	{
	public:
		CPSHUFLW();
		~CPSHUFLW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSHUFLW;

#endif
