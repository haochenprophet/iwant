#ifndef SECURITY_TRACE_H
#define SECURITY_TRACE_H

#include "../object.h"

namespace n_security_trace {
	class Csecurity_trace :public Object
	{
	public:
		Csecurity_trace();
		~Csecurity_trace();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_trace); }
	};
}

using namespace n_security_trace;

#endif
