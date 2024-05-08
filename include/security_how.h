#ifndef SECURITY_HOW_H
#define SECURITY_HOW_H

#include "../object.h"

namespace n_security_how {
	class Csecurity_how :public Object
	{
	public:
		Csecurity_how();
		~Csecurity_how();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_how); }
	};
}

using namespace n_security_how;

#endif
