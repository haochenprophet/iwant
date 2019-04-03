#ifndef CPU_H
#define CPU_H

#include "../object.h"

namespace n_cpu {
	class Ccpu :public Object
	{
	public:
		Ccpu();
		~Ccpu();
		int my_init(void *p=nullptr);
	};
}

using namespace n_cpu;

#endif
