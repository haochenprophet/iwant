#ifndef MARS_COMMUNICATION_H
#define MARS_COMMUNICATION_H

#include "../object.h"

namespace n_mars_communication {
	class Cmars_communication :public Object
	{
	public:
		Cmars_communication();
		~Cmars_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_communication); }
	};
}

using namespace n_mars_communication;

#endif
