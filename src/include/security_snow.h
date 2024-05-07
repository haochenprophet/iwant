#ifndef SECURITY_SNOW_H
#define SECURITY_SNOW_H

#include "../object.h"

namespace n_security_snow {
	class Csecurity_snow :public Object
	{
	public:
		Csecurity_snow();
		~Csecurity_snow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_snow); }
	};
}

using namespace n_security_snow;

#endif
