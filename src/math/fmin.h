#ifndef FMIN_H
#define FMIN_H

#include "../object.h"

namespace n_fmin {
	class Cfmin :public Object
	{
	public:
		Cfmin();
		~Cfmin();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfmin); }
	};
}

using namespace n_fmin;

#endif
