#ifndef AAA_H
#define AAA_H

#include "../object.h"

namespace n_AAA {
	class CAAA :public Object
	{
	public:
		CAAA();
		~CAAA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AAA;

#endif
