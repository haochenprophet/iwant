#ifndef LIFE_RECORD_H
#define LIFE_RECORD_H

#include "object/object.h"

namespace n_life_record {
	class Clife_record :public Object
	{
	public:
		Clife_record();
		~Clife_record();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_record); }
	};
}

using namespace n_life_record;

#endif
