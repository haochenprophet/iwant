#ifndef SECURITY_PAST_H
#define SECURITY_PAST_H

#include "object/object.h"

namespace n_security_past {
	class Csecurity_past :public Object
	{
	public:
		Csecurity_past();
		~Csecurity_past();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_past); }
	};
}

using namespace n_security_past;

#endif
