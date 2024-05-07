#ifndef DAA_H
#define DAA_H

#include "../object.h"

namespace n_DAA {
	class CDAA :public Object
	{
	public:
		CDAA();
		~CDAA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DAA;

#endif
