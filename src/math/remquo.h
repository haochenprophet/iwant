#ifndef REMQUO_H
#define REMQUO_H

#include "../object.h"

namespace n_remquo {
	class Cremquo :public Object
	{
	public:
		Cremquo();
		~Cremquo();
		int my_init(void *p=nullptr);
	};
}

using namespace n_remquo;

#endif
