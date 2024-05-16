#ifndef SATELLITE_GUI_H
#define SATELLITE_GUI_H

#include "object/object.h"

namespace n_satellite_gui {
	class Csatellite_gui :public Object
	{
	public:
		Csatellite_gui();
		~Csatellite_gui();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_gui); }
	};
}

using namespace n_satellite_gui;

#endif
