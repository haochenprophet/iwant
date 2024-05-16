#ifndef CODE_FETCH_H
#define CODE_FETCH_H

#include "object/object.h"

namespace n_code_fetch {
	class Ccode_fetch :public Object
	{
	public:
		Ccode_fetch();
		~Ccode_fetch();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_fetch); }
	};
}

using namespace n_code_fetch;

#endif
