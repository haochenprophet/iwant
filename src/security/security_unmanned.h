#ifndef SECURITY_UNMANNED_H
#define SECURITY_UNMANNED_H

#include "../object.h"

namespace n_security_unmanned {
	class Csecurity_unmanned :public Object
	{
	public:
		Csecurity_unmanned();
		~Csecurity_unmanned();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_unmanned); }
	};
}

using namespace n_security_unmanned;

#endif
