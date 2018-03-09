#ifndef ROR_H
#define ROR_H

#include "../object.h"

namespace n_ROR {
	class CROR :public Object
	{
	public:
		CROR();
		~CROR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROR;

#endif
