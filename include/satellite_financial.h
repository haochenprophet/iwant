#ifndef SATELLITE_FINANCIAL_H
#define SATELLITE_FINANCIAL_H

#include "../object.h"

namespace n_satellite_financial {
	class Csatellite_financial :public Object
	{
	public:
		Csatellite_financial();
		~Csatellite_financial();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_financial); }
	};
}

using namespace n_satellite_financial;

#endif
