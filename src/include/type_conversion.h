#ifndef TYPE_CONVERSION_H
#define TYPE_CONVERSION_H

#include "operator.h"

namespace n_type_conversion {
	class Ctype_conversion :public Coperator
	{
	public:
		Ctype_conversion();
		~Ctype_conversion();
		int my_init(void *p=nullptr);
	};
}

using namespace n_type_conversion;

#endif
