#ifndef HOME_NEWS_H
#define HOME_NEWS_H

#include "../object.h"

namespace n_home_news {
	class Chome_news :public Object
	{
	public:
		Chome_news();
		~Chome_news();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_news); }
	};
}

using namespace n_home_news;

#endif
