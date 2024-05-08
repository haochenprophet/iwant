#ifndef SECURITY_STARTTIME_H
#define SECURITY_STARTTIME_H

#include "../object.h"

namespace n_security_starttime {
	class Csecurity_starttime :public Object
	{
	public:
		Csecurity_starttime();
		~Csecurity_starttime();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_starttime); }
	};
}

using namespace n_security_starttime;

#endif
