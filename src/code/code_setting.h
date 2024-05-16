#ifndef CODE_SETTING_H
#define CODE_SETTING_H

#include "object/object.h"

namespace n_code_setting {
	class Ccode_setting :public Object
	{
	public:
		Ccode_setting();
		~Ccode_setting();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_setting); }
	};
}

using namespace n_code_setting;

#endif
