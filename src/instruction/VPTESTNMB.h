#ifndef VPTESTNMB_H
#define VPTESTNMB_H

#include "object/object.h"

namespace n_VPTESTNMB {
	class CVPTESTNMB :public Object
	{
	public:
		CVPTESTNMB();
		~CVPTESTNMB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTNMB;

#endif
