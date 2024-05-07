#ifndef SPACEPORT_WASTE_H
#define SPACEPORT_WASTE_H

#include "../object.h"

namespace n_spaceport_waste {
	class Cspaceport_waste :public Object
	{
	public:
		Cspaceport_waste();
		~Cspaceport_waste();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_waste); }
	};
}

using namespace n_spaceport_waste;

#endif
