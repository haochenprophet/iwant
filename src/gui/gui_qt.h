#ifndef GUI_QT_H
#define GUI_QT_H

#include "object/object.h"

namespace n_gui_qt {
	class Cgui_qt :public Object
	{
	public:
		Cgui_qt();
		~Cgui_qt();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cgui_qt); }
	};
}

using namespace n_gui_qt;

#endif
