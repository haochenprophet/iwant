#ifndef CMP_H
#define CMP_H

#include "../object.h"

namespace n_CMP {
	class CCMP :public Object
	{
	public:
		CCMP();
		~CCMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMP;

#endif
