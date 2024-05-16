#ifndef SATELLITE_LANGUAGE_H
#define SATELLITE_LANGUAGE_H

#include "object/object.h"

namespace n_satellite_language {
	class Csatellite_language :public Object
	{
	public:
		Csatellite_language();
		~Csatellite_language();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_language); }
	};
}

using namespace n_satellite_language;

#endif
