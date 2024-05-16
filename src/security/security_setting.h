#ifndef SECURITY_SETTING_H
#define SECURITY_SETTING_H

#include "object/object.h"

namespace n_security_setting {
	class Csecurity_setting :public Object
	{
	public:
		Csecurity_setting();
		~Csecurity_setting();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_setting); }
	};
}

using namespace n_security_setting;

#endif
