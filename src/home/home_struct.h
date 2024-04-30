#ifndef HOME_H
#define HOME_H

#include "../object.h"

namespace n_home_struct {
	class Chome_struct :public Object
	{
	public:
		Chome_struct();
		~Chome_struct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_struct); }
	};
}

using namespace n_home_struct;

#endif
