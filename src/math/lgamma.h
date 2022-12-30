#ifndef LGAMMA_H
#define LGAMMA_H

#include "../object.h"

namespace n_lgamma {
	class Clgamma :public Object
	{
	public:
		Clgamma();
		~Clgamma();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clgamma); }
	};
}

using namespace n_lgamma;

#endif
