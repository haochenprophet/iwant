#ifndef INC_H
#define INC_H

#include "object.h"

namespace n_INC {
	class CINC :public Object
	{
	public:
		CINC();
		~CINC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INC;

#endif
