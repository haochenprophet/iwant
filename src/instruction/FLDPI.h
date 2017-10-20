#ifndef FLDPI_H
#define FLDPI_H

#include "object.h"

namespace n_FLDPI {
	class CFLDPI :public Object
	{
	public:
		CFLDPI();
		~CFLDPI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDPI;

#endif
