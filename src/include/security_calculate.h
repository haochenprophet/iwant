#ifndef SECURITY_CALCULATE_H
#define SECURITY_CALCULATE_H

#include "../object.h"

namespace n_security_calculate {
	class Csecurity_calculate :public Object
	{
	public:
		Csecurity_calculate();
		~Csecurity_calculate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_calculate); }
	};
}

using namespace n_security_calculate;

#endif
