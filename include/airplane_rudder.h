#ifndef AIRPLANE_RUDDER_H
#define AIRPLANE_RUDDER_H

#include "../object.h"

namespace n_airplane_rudder {
	class Cairplane_rudder :public Object
	{
	public:
		Cairplane_rudder();
		~Cairplane_rudder();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_rudder); }
	};
}

using namespace n_airplane_rudder;

#endif
