#ifndef SCAS_H
#define SCAS_H

#include "object.h"

namespace n_SCAS {
	class CSCAS :public Object
	{
	public:
		CSCAS();
		~CSCAS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SCAS;

#endif
