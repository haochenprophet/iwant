#ifndef SATELLITE_FILE_H
#define SATELLITE_FILE_H

#include "../object.h"

namespace n_satellite_file {
	class Csatellite_file :public Object
	{
	public:
		Csatellite_file();
		~Csatellite_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_file); }
	};
}

using namespace n_satellite_file;

#endif
