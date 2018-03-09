#ifndef VPGATHERDD_H
#define VPGATHERDD_H

#include "../object.h"

namespace n_VPGATHERDD {
	class CVPGATHERDD :public Object
	{
	public:
		CVPGATHERDD();
		~CVPGATHERDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPGATHERDD;

#endif
