#ifndef CODE_UPDATE_H
#define CODE_UPDATE_H

#include "../object.h"

namespace n_code_update {
	class Ccode_update :public Object
	{
	public:
		Ccode_update();
		~Ccode_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_update); }
	};
}

using namespace n_code_update;

#endif
