#ifndef SECURITY_RESCUE_H
#define SECURITY_RESCUE_H

#include "../object.h"

namespace n_security_rescue {
	class Csecurity_rescue :public Object
	{
	public:
		Csecurity_rescue();
		~Csecurity_rescue();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_rescue); }
	};
}

using namespace n_security_rescue;

#endif
