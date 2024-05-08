#ifndef SPACEPORT_CO2_H
#define SPACEPORT_CO2_H

#include "../object.h"

namespace n_spaceport_co2 {
	class Cspaceport_co2 :public Object
	{
	public:
		Cspaceport_co2();
		~Cspaceport_co2();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_co2); }
	};
}

using namespace n_spaceport_co2;

#endif
