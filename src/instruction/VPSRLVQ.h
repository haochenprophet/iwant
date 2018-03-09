#ifndef VPSRLVQ_H
#define VPSRLVQ_H

#include "../object.h"

namespace n_VPSRLVQ {
	class CVPSRLVQ :public Object
	{
	public:
		CVPSRLVQ();
		~CVPSRLVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRLVQ;

#endif
