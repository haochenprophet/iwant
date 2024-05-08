#ifndef CODE_PROPERTY_H
#define CODE_PROPERTY_H

#include "../object.h"

namespace n_code_property {
	class Ccode_property :public Object
	{
	public:
		Ccode_property();
		~Ccode_property();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_property); }
	};
}

using namespace n_code_property;

#endif
