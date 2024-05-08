#ifndef OCEAN_NEWS_H
#define OCEAN_NEWS_H

#include "../object.h"

namespace n_ocean_news {
	class Cocean_news :public Object
	{
	public:
		Cocean_news();
		~Cocean_news();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_news); }
	};
}

using namespace n_ocean_news;

#endif
