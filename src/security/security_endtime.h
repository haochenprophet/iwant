#ifndef SECURITY_ENDTIME_H
#define SECURITY_ENDTIME_H

#include "object/object.h"

namespace n_security_endtime {
	class Csecurity_endtime :public Object
	{
	public:
		Csecurity_endtime();
		~Csecurity_endtime();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_endtime); }
	};
}

using namespace n_security_endtime;

#endif
