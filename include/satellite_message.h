#ifndef SATELLITE_MESSAGE_H
#define SATELLITE_MESSAGE_H

#include "../object.h"

namespace n_satellite_message {
	class Csatellite_message :public Object
	{
	public:
		Csatellite_message();
		~Csatellite_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_message); }
	};
}

using namespace n_satellite_message;

#endif
