#ifndef RCR_H
#define RCR_H

#include "object/object.h"

namespace n_RCR {
	class CRCR :public Object
	{
	public:
		CRCR();
		~CRCR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RCR;

#endif
