#ifndef SECURITY_BOX_H
#define SECURITY_BOX_H

#include "../object.h"

namespace n_security_box {
	class Csecurity_box :public Object
	{
	public:
		Csecurity_box();
		~Csecurity_box();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_box); }
	};
}

using namespace n_security_box;

#endif
