#ifndef INCREMENT_SUFFIX_H
#define INCREMENT_SUFFIX_H

#include "../operator.h"

namespace n_increment_suffix {
	class Cincrement_suffix :public Coperator
	{
	public:
		Cincrement_suffix();
		~Cincrement_suffix();
		int my_init(void *p=nullptr);
	};
}

using namespace n_increment_suffix;

#endif
