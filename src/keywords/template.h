#ifndef TEMPLATE_H
#define TEMPLATE_H

#include "../object.h"

namespace n_template {
	class Ctemplate :public Object
	{
	public:
		Ctemplate();
		int my_init(void *p=nullptr);
	};
}

using namespace n_template;

#endif
