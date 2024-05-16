#ifndef HOME_RECORD_H
#define HOME_RECORD_H

#include "object/object.h"

namespace n_home_record {
	class Chome_record :public Object
	{
	public:
		Chome_record();
		~Chome_record();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_record); }
	};
}

using namespace n_home_record;

#endif
