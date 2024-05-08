#ifndef CODE_BUILD_H
#define CODE_BUILD_H

#include "../object.h"

namespace n_code_build {
	class Ccode_build :public Object
	{
	public:
		Ccode_build();
		~Ccode_build();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_build); }
	};
}

using namespace n_code_build;

#endif
