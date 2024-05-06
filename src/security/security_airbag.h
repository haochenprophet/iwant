#ifndef SECURITY_AIRBAG_H
#define SECURITY_AIRBAG_H

#include "../object.h"

namespace n_security_airbag {
	class Csecurity_airbag :public Object
	{
	public:
		Csecurity_airbag();
		~Csecurity_airbag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_airbag); }
	};
}

using namespace n_security_airbag;

#endif
