#ifndef SECURITY_UUID_H
#define SECURITY_UUID_H

#include "../object.h"

namespace n_security_uuid {
	class Csecurity_uuid :public Object
	{
	public:
		Csecurity_uuid();
		~Csecurity_uuid();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_uuid); }
	};
}

using namespace n_security_uuid;

#endif
