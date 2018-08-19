#ifndef ATOF_H
#define ATOF_H

#include "../object.h"

namespace n_atof {
	class Catof :public Object
	{
	public:
		Catof();
		~Catof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atof;

#endif
