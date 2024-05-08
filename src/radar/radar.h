#ifndef RADAR_H
#define RADAR_H

#include "../object.h"

namespace n_radar {
	class Cradar :public Object
	{
	public:
		Cradar();
		~Cradar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar); }
	};
}

using namespace n_radar;

#endif
