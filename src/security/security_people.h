#ifndef SECURITY_PEOPLE_H
#define SECURITY_PEOPLE_H

#include "object/object.h"

namespace n_security_people {
	class Csecurity_people :public Object
	{
	public:
		Csecurity_people();
		~Csecurity_people();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_people); }
	};
}

using namespace n_security_people;

#endif
