#ifndef VPTERNLOGQ_H
#define VPTERNLOGQ_H

#include "object/object.h"

namespace n_VPTERNLOGQ {
	class CVPTERNLOGQ :public Object
	{
	public:
		CVPTERNLOGQ();
		~CVPTERNLOGQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTERNLOGQ;

#endif
