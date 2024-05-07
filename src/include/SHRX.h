#ifndef SHRX_H
#define SHRX_H

#include "../object.h"

namespace n_SHRX {
	class CSHRX :public Object
	{
	public:
		CSHRX();
		~CSHRX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHRX;

#endif
