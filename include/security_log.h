#ifndef SECURITY_LOG_H
#define SECURITY_LOG_H

#include "../object.h"

namespace n_security_log {
	class Csecurity_log :public Object
	{
	public:
		Csecurity_log();
		~Csecurity_log();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_log); }
	};
}

using namespace n_security_log;

#endif
