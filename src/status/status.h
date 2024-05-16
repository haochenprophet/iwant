#ifndef STATUS_H
#define STATUS_H

#include "object/object.h"

namespace n_status {
	class Cstatus :public Object
	{
	public:
		Cstatus();
		~Cstatus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cstatus); }
	};
}

using namespace n_status;

#endif
