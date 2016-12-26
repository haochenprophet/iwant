#ifndef DISPLAY_H
#define DISPLAY_H

#include "object.h"

namespace n_display {
	class Cdisplay :public Object
	{
	public:
		Cdisplay();
		int my_init(void *p=nullptr);
	};
}

using namespace n_display;

#endif
