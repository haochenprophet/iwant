#ifndef SECURITY_MAP_H
#define SECURITY_MAP_H

#include "object/object.h"

namespace n_security_map {
	class Csecurity_map :public Object
	{
	public:
		Csecurity_map();
		~Csecurity_map();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_map); }
	};
}

using namespace n_security_map;

#endif
