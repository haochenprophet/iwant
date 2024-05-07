#ifndef SECURITY_HOUSE_H
#define SECURITY_HOUSE_H

#include "../object.h"

namespace n_security_house {
	class Csecurity_house :public Object
	{
	public:
		Csecurity_house();
		~Csecurity_house();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_house); }
	};
}

using namespace n_security_house;

#endif
