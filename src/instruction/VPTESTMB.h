#ifndef VPTESTMB_H
#define VPTESTMB_H

#include "object/object.h"

namespace n_VPTESTMB {
	class CVPTESTMB :public Object
	{
	public:
		CVPTESTMB();
		~CVPTESTMB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTMB;

#endif
