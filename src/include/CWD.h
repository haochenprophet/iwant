#ifndef CWD_H
#define CWD_H

#include "../object.h"

namespace n_CWD {
	class CCWD :public Object
	{
	public:
		CCWD();
		~CCWD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CWD;

#endif
