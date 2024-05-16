#ifndef BSR_H
#define BSR_H

#include "object/object.h"

namespace n_BSR {
	class CBSR :public Object
	{
	public:
		CBSR();
		~CBSR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BSR;

#endif
