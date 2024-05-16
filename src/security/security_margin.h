#ifndef SECURITY_MARGIN_H
#define SECURITY_MARGIN_H

#include "object/object.h"

namespace n_security_margin {
	class Csecurity_margin :public Object
	{
	public:
		Csecurity_margin();
		~Csecurity_margin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_margin); }
	};
}

using namespace n_security_margin;

#endif
