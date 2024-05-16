#ifndef RSM_H
#define RSM_H

#include "object/object.h"

namespace n_RSM {
	class CRSM :public Object
	{
	public:
		CRSM();
		~CRSM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RSM;

#endif
