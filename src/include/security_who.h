#ifndef SECURITY_WHO_H
#define SECURITY_WHO_H

#include "../object.h"

namespace n_security_who {
	class Csecurity_who :public Object
	{
	public:
		Csecurity_who();
		~Csecurity_who();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_who); }
	};
}

using namespace n_security_who;

#endif
