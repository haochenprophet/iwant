#ifndef IDIV_H
#define IDIV_H

#include "../object.h"

namespace n_IDIV {
	class CIDIV :public Object
	{
	public:
		CIDIV();
		~CIDIV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_IDIV;

#endif
