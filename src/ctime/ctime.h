#ifndef CTIME_H
#define CTIME_H

#include "../object.h"

namespace n_ctime {
	class Cctime :public Object
	{
	public:
		Cctime();
		~Cctime();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ctime;

#endif
