#ifndef SECURITY_POINT_H
#define SECURITY_POINT_H

#include "../object.h"

namespace n_security_point {
	class Csecurity_point :public Object
	{
	public:
		Csecurity_point();
		~Csecurity_point();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_point); }
	};
}

using namespace n_security_point;

#endif
