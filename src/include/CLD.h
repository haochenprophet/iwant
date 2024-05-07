#ifndef CLD_H
#define CLD_H

#include "../object.h"

namespace n_CLD {
	class CCLD :public Object
	{
	public:
		CCLD();
		~CCLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLD;

#endif
