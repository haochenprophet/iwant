#ifndef SECURITY_BAG_H
#define SECURITY_BAG_H

#include "../object.h"

namespace n_security_bag {
	class Csecurity_bag :public Object
	{
	public:
		Csecurity_bag();
		~Csecurity_bag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_bag); }
	};
}

using namespace n_security_bag;

#endif
