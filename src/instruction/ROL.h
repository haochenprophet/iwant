#ifndef ROL_H
#define ROL_H

#include "../object.h"

namespace n_ROL {
	class CROL :public Object
	{
	public:
		CROL();
		~CROL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROL;

#endif
