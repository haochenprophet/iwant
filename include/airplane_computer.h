#ifndef AIRPLANE_COMPUTER_H
#define AIRPLANE_COMPUTER_H

#include "../object.h"

namespace n_airplane_computer {
	class Cairplane_computer :public Object
	{
	public:
		Cairplane_computer();
		~Cairplane_computer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_computer); }
	};
}

using namespace n_airplane_computer;

#endif
