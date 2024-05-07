#ifndef INCREMENT_PREFIX_H
#define INCREMENT_PREFIX_H

#include "operator.h"

namespace n_increment_prefix {
	class Cincrement_prefix :public Coperator
	{
	public:
		Cincrement_prefix();
		~Cincrement_prefix();
		int my_init(void *p=nullptr);
	};
}

using namespace n_increment_prefix;

#endif
