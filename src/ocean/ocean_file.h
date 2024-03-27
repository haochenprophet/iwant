#ifndef OCEAN_FILE_H
#define OCEAN_FILE_H

#include "../object.h"

namespace n_ocean_file {
	class Cocean_file :public Object
	{
	public:
		Cocean_file();
		~Cocean_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_file); }
	};
}

using namespace n_ocean_file;

#endif
