#ifndef MOVBE_H
#define MOVBE_H

#include "object/object.h"

namespace n_MOVBE {
	class CMOVBE :public Object
	{
	public:
		CMOVBE();
		~CMOVBE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVBE;

#endif
