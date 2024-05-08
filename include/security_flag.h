#ifndef SECURITY_FLAG_H
#define SECURITY_FLAG_H

#include "../object.h"

namespace n_security_flag {
	class Csecurity_flag :public Object
	{
	public:
		Csecurity_flag();
		~Csecurity_flag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_flag); }
	};
}

using namespace n_security_flag;

#endif
