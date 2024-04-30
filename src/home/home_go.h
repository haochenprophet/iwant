#ifndef HOME_GO_H
#define HOME_GO_H

#include "../object.h"

namespace n_home_go {
	class Chome_go :public Object
	{
	public:
		Chome_go();
		~Chome_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_go); }
	};
}

using namespace n_home_go;

#endif
