#ifndef SATELLITE_NEWS_H
#define SATELLITE_NEWS_H

#include "object/object.h"

namespace n_satellite_news {
	class Csatellite_news :public Object
	{
	public:
		Csatellite_news();
		~Csatellite_news();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_news); }
	};
}

using namespace n_satellite_news;

#endif
