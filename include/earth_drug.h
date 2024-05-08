#ifndef EARTH_DRUG_H
#define EARTH_DRUG_H

#include "../object.h"

namespace n_earth_drug {
	class Cearth_drug :public Object
	{
	public:
		Cearth_drug();
		~Cearth_drug();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_drug); }
	};
}

using namespace n_earth_drug;

#endif
