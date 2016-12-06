#ifndef ALIGNAS_H
#define ALIGNAS_H

#include "object.h"

namespace n_alignas {
	class Calignas :public Object
	{
	public:
		Calignas();
		int my_init(void *p=NULL);
	};
}

using namespace n_alignas;

#endif
