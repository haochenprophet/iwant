#ifndef CODE_ACTION_H
#define CODE_ACTION_H

#include "../object.h"

namespace n_code_action {
	class Ccode_action :public Object
	{
	public:
		Ccode_action();
		~Ccode_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_action); }
	};
}

using namespace n_code_action;

#endif
