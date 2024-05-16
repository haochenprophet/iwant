#ifndef SECURITY_MODIFY_H
#define SECURITY_MODIFY_H

#include "object/object.h"

namespace n_security_modify {
	class Csecurity_modify :public Object
	{
	public:
		Csecurity_modify();
		~Csecurity_modify();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_modify); }
	};
}

using namespace n_security_modify;

#endif
