#ifndef SECURITY_WHERE_H
#define SECURITY_WHERE_H

#include "../object.h"

namespace n_security_where {
	class Csecurity_where :public Object
	{
	public:
		Csecurity_where();
		~Csecurity_where();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_where); }
	};
}

using namespace n_security_where;

#endif
