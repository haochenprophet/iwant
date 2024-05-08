#ifndef LIFE_GO_H
#define LIFE_GO_H

#include "../object.h"

namespace n_life_go {
	class Clife_go :public Object
	{
	public:
		Clife_go();
		~Clife_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_go); }
	};
}

using namespace n_life_go;

#endif
