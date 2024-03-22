#ifndef CODE_PULL_H
#define CODE_PULL_H

#include "../object.h"

namespace n_code_pull {
	class Ccode_pull :public Object
	{
	public:
		Ccode_pull();
		~Ccode_pull();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_pull); }
	};
}

using namespace n_code_pull;

#endif
