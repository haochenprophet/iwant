#ifndef SECURITY_UPSIDE_H
#define SECURITY_UPSIDE_H

#include "object/object.h"

namespace n_security_upside {
	class Csecurity_upside :public Object
	{
	public:
		Csecurity_upside();
		~Csecurity_upside();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_upside); }
	};
}

using namespace n_security_upside;

#endif
