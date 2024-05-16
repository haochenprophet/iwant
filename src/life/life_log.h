#ifndef LIFE_LOG_H
#define LIFE_LOG_H

#include "object/object.h"

namespace n_life_log {
	class Clife_log :public Object
	{
	public:
		Clife_log();
		~Clife_log();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_log); }
	};
}

using namespace n_life_log;

#endif
