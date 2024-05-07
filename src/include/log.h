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
		size_t my_size() { return sizeof(Clog); }
		static double log_c(double x);
	};
}

using namespace n_log;

#endif
