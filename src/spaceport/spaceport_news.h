#ifndef SPACEPORT_NEWS_H
#define SPACEPORT_NEWS_H

#include "object/object.h"

namespace n_spaceport_news {
	class Cspaceport_news :public Object
	{
	public:
		Cspaceport_news();
		~Cspaceport_news();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_news); }
	};
}

using namespace n_spaceport_news;

#endif
