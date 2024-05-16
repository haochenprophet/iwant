#ifndef SECURITY_BIOLOGICAL_H
#define SECURITY_BIOLOGICAL_H

#include "object/object.h"

namespace n_security_biological {
	class Csecurity_biological :public Object
	{
	public:
		Csecurity_biological();
		~Csecurity_biological();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_biological); }
	};
}

using namespace n_security_biological;

#endif
