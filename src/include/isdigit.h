#ifndef ISDIGIT_H
#define ISDIGIT_H

#include "../object.h"

namespace n_isdigit {
	class Cisdigit :public Object
	{
	public:
		Cisdigit();
		~Cisdigit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isdigit;

#endif
