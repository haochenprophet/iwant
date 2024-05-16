#ifndef BTR_H
#define BTR_H

#include "object/object.h"

namespace n_BTR {
	class CBTR :public Object
	{
	public:
		CBTR();
		~CBTR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BTR;

#endif
