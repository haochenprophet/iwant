#ifndef STRTOF_H
#define STRTOF_H

#include "../object.h"

namespace n_strtof {
	class Cstrtof :public Object
	{
	public:
		Cstrtof();
		~Cstrtof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtof;

#endif
