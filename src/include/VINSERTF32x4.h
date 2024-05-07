#ifndef VINSERTF32X4_H
#define VINSERTF32X4_H

#include "../object.h"

namespace n_VINSERTF32x4 {
	class CVINSERTF32x4 :public Object
	{
	public:
		CVINSERTF32x4();
		~CVINSERTF32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTF32x4;

#endif
