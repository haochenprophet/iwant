#ifndef HOME_CLEAN_H
#define HOME_CLEAN_H

#include "../object.h"

namespace n_home_clean {
	class Chome_clean :public Object
	{
	public:
		Chome_clean();
		~Chome_clean();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_clean); }
	};
}

using namespace n_home_clean;

#endif
