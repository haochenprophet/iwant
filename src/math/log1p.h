#ifndef LOG1P_H
#define LOG1P_H

#include "../object.h"

namespace n_log1p {
	class Clog1p :public Object
	{
	public:
		Clog1p();
		~Clog1p();
		int my_init(void *p=nullptr);
	};
}

using namespace n_log1p;

#endif
