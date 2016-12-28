#ifndef BYTE_H
#define BYTE_H

#include "object.h"

namespace n_byte {
	class Cbyte :public Object
	{
	public:
		Cbyte();
		int my_init(void *p=nullptr);
	};
}

using namespace n_byte;

#endif
