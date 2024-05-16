#ifndef CODE_DATA_TYPE_H
#define CODE_DATA_TYPE_H

#include "object/object.h"

namespace n_code_data_type {
	class Ccode_data_type :public Object
	{
	public:
		Ccode_data_type();
		~Ccode_data_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_data_type); }
	};
}

using namespace n_code_data_type;

#endif
