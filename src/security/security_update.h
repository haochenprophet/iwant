#ifndef SECURITY_UPDATE_H
#define SECURITY_UPDATE_H

#include "object/object.h"

namespace n_security_update {
	class Csecurity_update :public Object
	{
	public:
		Csecurity_update();
		~Csecurity_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_update); }
	};
}

using namespace n_security_update;

#endif
