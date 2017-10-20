#ifndef STOS_H
#define STOS_H

#include "object.h"

namespace n_STOS {
	class CSTOS :public Object
	{
	public:
		CSTOS();
		~CSTOS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STOS;

#endif
