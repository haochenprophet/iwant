#ifndef PERROR_H
#define PERROR_H

#include "../object.h"

namespace n_perror {
	class Cperror :public Object
	{
	public:
		Cperror();
		~Cperror();
		int my_init(void *p=nullptr);
	};
}

using namespace n_perror;

#endif
