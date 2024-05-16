#ifndef SPACEPORT_PERSON_H
#define SPACEPORT_PERSON_H

#include "object/object.h"

namespace n_spaceport_person {
	class Cspaceport_person :public Object
	{
	public:
		Cspaceport_person();
		~Cspaceport_person();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_person); }
	};
}

using namespace n_spaceport_person;

#endif
