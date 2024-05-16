#ifndef SPACEPORT_BED_H
#define SPACEPORT_BED_H

#include "object/object.h"

namespace n_spaceport_bed {
	class Cspaceport_bed :public Object
	{
	public:
		Cspaceport_bed();
		~Cspaceport_bed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_bed); }
	};
}

using namespace n_spaceport_bed;

#endif
