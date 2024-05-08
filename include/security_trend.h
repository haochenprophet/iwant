#ifndef SECURITY_TREND_H
#define SECURITY_TREND_H

#include "../object.h"

namespace n_security_trend {
	class Csecurity_trend :public Object
	{
	public:
		Csecurity_trend();
		~Csecurity_trend();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_trend); }
	};
}

using namespace n_security_trend;

#endif
