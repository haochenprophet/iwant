#ifndef CODE_ACTION_H
#define CODE_ACTION_H

#include "bit/bits_def.h"
#include "action/action_type.h"

enum class CodeAtcionClass
{
	none,
	create,
};

enum class CodeAtcion {
	create_h = BIT0,
	create_c = BIT1,
	create_func = BIT2,
	set_package = BIT3,
};

#include "object/object.h"

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
