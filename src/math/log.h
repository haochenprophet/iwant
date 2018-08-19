#ifndef LOG_H
#define LOG_H

#include "../object.h"

namespace n_log {
	class Clog :public Object
	{
	public:
		Clog();
		~Clog();
		int my_init(void *p=nullptr);
	};
}

using namespace n_log;

#endif
