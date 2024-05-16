#ifndef MOVUPS_H
#define MOVUPS_H

#include "object/object.h"

namespace n_MOVUPS {
	class CMOVUPS :public Object
	{
	public:
		CMOVUPS();
		~CMOVUPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVUPS;

#endif
