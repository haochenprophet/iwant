#ifndef REP_H
#define REP_H

#include "../object.h"

namespace n_REP {
	class CREP :public Object
	{
	public:
		CREP();
		~CREP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_REP;

#endif
