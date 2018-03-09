#ifndef PMOVZX_H
#define PMOVZX_H

#include "../object.h"

namespace n_PMOVZX {
	class CPMOVZX :public Object
	{
	public:
		CPMOVZX();
		~CPMOVZX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMOVZX;

#endif
