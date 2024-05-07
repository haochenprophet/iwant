#ifndef FSUBRP_H
#define FSUBRP_H

#include "../object.h"

namespace n_FSUBRP {
	class CFSUBRP :public Object
	{
	public:
		CFSUBRP();
		~CFSUBRP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSUBRP;

#endif
