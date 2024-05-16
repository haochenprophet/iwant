#ifndef HOME_PERSON_H
#define HOME_PERSON_H

#include "object/object.h"

namespace n_home_person {
	class Chome_person :public Object
	{
	public:
		Chome_person();
		~Chome_person();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_person); }
	};
}

using namespace n_home_person;

#endif
