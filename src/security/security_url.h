#ifndef SECURITY_URL_H
#define SECURITY_URL_H

#include "object/object.h"

namespace n_security_url {
	class Csecurity_url :public Object
	{
	public:
		Csecurity_url();
		~Csecurity_url();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_url); }
	};
}

using namespace n_security_url;

#endif
