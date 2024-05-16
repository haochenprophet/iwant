#ifndef SECURITY_PATH_H
#define SECURITY_PATH_H

#include "object/object.h"

namespace n_security_path {
	class Csecurity_path :public Object
	{
	public:
		Csecurity_path();
		~Csecurity_path();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_path); }
	};
}

using namespace n_security_path;

#endif
