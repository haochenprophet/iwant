#ifndef WARSHIP_COMPUTER_H
#define WARSHIP_COMPUTER_H

#include "../object.h"

namespace n_warship_computer {
	class Cwarship_computer :public Object
	{
	public:
		Cwarship_computer();
		~Cwarship_computer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_computer); }
	};
}

using namespace n_warship_computer;

#endif
