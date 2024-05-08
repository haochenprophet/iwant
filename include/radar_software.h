#ifndef RADAR_SOFTWARE_H
#define RADAR_SOFTWARE_H

#include "../object.h"

namespace n_radar_software {
	class Cradar_software :public Object
	{
	public:
		Cradar_software();
		~Cradar_software();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_software); }
	};
}

using namespace n_radar_software;

#endif
