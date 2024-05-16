#ifndef GUI_H
#define GUI_H

#include "object/object.h"

namespace n_gui {
	class Cgui :public Object
	{
	public:
		Cgui();
		~Cgui();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cgui); }
	};
}

using namespace n_gui;

#endif
