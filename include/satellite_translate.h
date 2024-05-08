#ifndef SATELLITE_TRANSLATE_H
#define SATELLITE_TRANSLATE_H

#include "../object.h"

namespace n_satellite_translate {
	class Csatellite_translate :public Object
	{
	public:
		Csatellite_translate();
		~Csatellite_translate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_translate); }
	};
}

using namespace n_satellite_translate;

#endif
