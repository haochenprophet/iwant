#ifndef SECURITY_ID_H
#define SECURITY_ID_H

#include "../object.h"

namespace n_security_id {
	class Csecurity_id :public Object
	{
	public:
		Csecurity_id();
		~Csecurity_id();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_id); }
	};
}

using namespace n_security_id;

#endif
