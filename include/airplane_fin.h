#ifndef AIRPLANE_FIN_H
#define AIRPLANE_FIN_H

#include "../object.h"

namespace n_airplane_fin {
	class Cairplane_fin :public Object
	{
	public:
		Cairplane_fin();
		~Cairplane_fin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_fin); }
	};
}

using namespace n_airplane_fin;

#endif
