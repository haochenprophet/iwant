#ifndef SECURITY_TRAVEL_H
#define SECURITY_TRAVEL_H

#include "../object.h"

namespace n_security_travel {
	class Csecurity_travel :public Object
	{
	public:
		Csecurity_travel();
		~Csecurity_travel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_travel); }
	};
}

using namespace n_security_travel;

#endif
