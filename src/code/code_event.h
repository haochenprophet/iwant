#ifndef CODE_EVENT_H
#define CODE_EVENT_H

#include "object/object.h"

namespace n_code_event {
	class Ccode_event :public Object
	{
	public:
		Ccode_event();
		~Ccode_event();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_event); }
	};
}

using namespace n_code_event;

#endif
