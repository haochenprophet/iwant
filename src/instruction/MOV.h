#ifndef MOV_H
#define MOV_H

#include "object/object.h"

namespace n_MOV {
	class CMOV :public Object
	{
	public:
		CMOV();
		~CMOV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOV;

#endif
