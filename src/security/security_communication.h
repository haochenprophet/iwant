#ifndef SECURITY_COMMUNICATION_H
#define SECURITY_COMMUNICATION_H

#include "object/object.h"

namespace n_security_communication {
	class Csecurity_communication :public Object
	{
	public:
		Csecurity_communication();
		~Csecurity_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_communication); }
	};
}

using namespace n_security_communication;

#endif
