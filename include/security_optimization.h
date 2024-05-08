#ifndef SECURITY_OPTIMIZATION_H
#define SECURITY_OPTIMIZATION_H

#include "../object.h"

namespace n_security_optimization {
	class Csecurity_optimization :public Object
	{
	public:
		Csecurity_optimization();
		~Csecurity_optimization();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_optimization); }
	};
}

using namespace n_security_optimization;

#endif
