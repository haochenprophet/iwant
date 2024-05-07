#ifndef CODE_TEMPLATE_H
#define CODE_TEMPLATE_H

#include "../object.h"

namespace n_code_template {
	class Ccode_template :public Object
	{
	public:
		Ccode_template();
		~Ccode_template();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_template); }
	};
}

using namespace n_code_template;

#endif
