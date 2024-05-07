#ifndef NEW_ARRAY_H
#define NEW_ARRAY_H

#include "operator.h"

namespace n_new_array {
	class Cnew_array :public Coperator
	{
	public:
		Cnew_array();
		~Cnew_array();
		int my_init(void *p=nullptr);
	};
}

using namespace n_new_array;

#endif
