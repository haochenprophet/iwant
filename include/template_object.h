#ifndef TEMPLATE_H
#define TEMPLATE_H

#include "../object.h"

namespace n_template_object {
	class Ctemplate_object :public Object
	{
	public:
		Ctemplate_object();
		~Ctemplate_object();
		int my_init(void *p=nullptr);
	};
}

using namespace n_template_object;

#endif
