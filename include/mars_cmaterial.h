#ifndef MARS_CMATERIAL_H
#define MARS_CMATERIAL_H

#include "../object.h"

namespace n_mars_cmaterial {
	class Cmars_cmaterial :public Object
	{
	public:
		Cmars_cmaterial();
		~Cmars_cmaterial();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_cmaterial); }
	};
}

using namespace n_mars_cmaterial;

#endif
