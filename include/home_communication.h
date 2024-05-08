#ifndef HOME_COMMUNICATION_H
#define HOME_COMMUNICATION_H

#include "../object.h"

namespace n_home_communication {
	class Chome_communication :public Object
	{
	public:
		Chome_communication();
		~Chome_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_communication); }
	};
}

using namespace n_home_communication;

#endif
