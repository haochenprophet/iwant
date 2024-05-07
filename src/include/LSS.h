#ifndef LSS_H
#define LSS_H

#include "../object.h"

namespace n_LSS {
	class CLSS :public Object
	{
	public:
		CLSS();
		~CLSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LSS;

#endif
