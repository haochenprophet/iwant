#ifndef SECURITY_HEIGHT_H
#define SECURITY_HEIGHT_H

#include "../object.h"

namespace n_security_height {
	class Csecurity_height :public Object
	{
	public:
		Csecurity_height();
		~Csecurity_height();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_height); }
	};
}

using namespace n_security_height;

#endif
