#ifndef CAR_NEWS_H
#define CAR_NEWS_H

#include "object/object.h"

namespace n_car_news {
	class Ccar_news :public Object
	{
	public:
		Ccar_news();
		~Ccar_news();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_news); }
	};
}

using namespace n_car_news;

#endif
