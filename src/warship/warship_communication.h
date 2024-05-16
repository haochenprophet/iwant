#ifndef WARSHIP_COMMUNICATION_H
#define WARSHIP_COMMUNICATION_H

#include "object/object.h"

namespace n_warship_communication {
	class Cwarship_communication :public Object
	{
	public:
		Cwarship_communication();
		~Cwarship_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_communication); }
	};
}

using namespace n_warship_communication;

#endif
