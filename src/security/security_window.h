#ifndef SECURITY_WINDOW_H
#define SECURITY_WINDOW_H

#include "object/object.h"

namespace n_security_window {
	class Csecurity_window :public Object
	{
	public:
		Csecurity_window();
		~Csecurity_window();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_window); }
	};
}

using namespace n_security_window;

#endif
