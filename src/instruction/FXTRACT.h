#ifndef FXTRACT_H
#define FXTRACT_H

#include "object.h"

namespace n_FXTRACT {
	class CFXTRACT :public Object
	{
	public:
		CFXTRACT();
		~CFXTRACT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FXTRACT;

#endif
