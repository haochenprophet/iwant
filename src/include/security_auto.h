#ifndef SECURITY_AUTO_H
#define SECURITY_AUTO_H

#include "../object.h"

namespace n_security_auto {
	class Csecurity_auto :public Object
	{
	public:
		Csecurity_auto();
		~Csecurity_auto();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_auto); }
	};
}

using namespace n_security_auto;

#endif
