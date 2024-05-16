#ifndef SECURITY_DELETE_H
#define SECURITY_DELETE_H

#include "object/object.h"

namespace n_security_delete {
	class Csecurity_delete :public Object
	{
	public:
		Csecurity_delete();
		~Csecurity_delete();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_delete); }
	};
}

using namespace n_security_delete;

#endif
