#ifndef CBW_H
#define CBW_H

#include "object/object.h"

namespace n_CBW {
	class CCBW :public Object
	{
	public:
		CCBW();
		~CCBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CBW;

#endif
