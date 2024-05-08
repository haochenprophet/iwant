#ifndef SPACEPORT_OBJECT_H
#define SPACEPORT_OBJECT_H

#include "../object.h"

namespace n_spaceport_object {
	class Cspaceport_object :public Object
	{
	public:
		Cspaceport_object();
		~Cspaceport_object();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_object); }
	};
}

using namespace n_spaceport_object;

#endif
