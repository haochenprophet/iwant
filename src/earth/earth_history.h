#ifndef EARTH_HISTORY_H
#define EARTH_HISTORY_H

#include "../object.h"

namespace n_earth_history {
	class Cearth_history :public Object
	{
	public:
		Cearth_history();
		~Cearth_history();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_history); }
	};
}

using namespace n_earth_history;

#endif
