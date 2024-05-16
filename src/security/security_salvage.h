#ifndef SECURITY_SALVAGE_H
#define SECURITY_SALVAGE_H

#include "object/object.h"

namespace n_security_salvage {
	class Csecurity_salvage :public Object
	{
	public:
		Csecurity_salvage();
		~Csecurity_salvage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_salvage); }
	};
}

using namespace n_security_salvage;

#endif
