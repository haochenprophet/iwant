#ifndef HOME_TELEVISION_H
#define HOME_TELEVISION_H

#include "../object.h"

namespace n_home_television {
	class Chome_television :public Object
	{
	public:
		Chome_television();
		~Chome_television();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_television); }
	};
}

using namespace n_home_television;

#endif
