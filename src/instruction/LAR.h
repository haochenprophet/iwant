#ifndef LAR_H
#define LAR_H

#include "object/object.h"

namespace n_LAR {
	class CLAR :public Object
	{
	public:
		CLAR();
		~CLAR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LAR;

#endif
