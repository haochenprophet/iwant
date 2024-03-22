#ifndef CODE_PUSH_H
#define CODE_PUSH_H

#include "../object.h"

namespace n_code_push {
	class Ccode_push :public Object
	{
	public:
		Ccode_push();
		~Ccode_push();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_push); }
	};
}

using namespace n_code_push;

#endif
