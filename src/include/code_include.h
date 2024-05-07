#ifndef CODE_INCLUDE_H
#define CODE_INCLUDE_H

#include "../object.h"

namespace n_code_include {
	class Ccode_include :public Object
	{
	public:
		Ccode_include();
		~Ccode_include();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_include); }
	};
}

using namespace n_code_include;

#endif
