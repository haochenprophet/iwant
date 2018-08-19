#ifndef FPUTS_H
#define FPUTS_H

#include "../object.h"

namespace n_fputs {
	class Cfputs :public Object
	{
	public:
		Cfputs();
		~Cfputs();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fputs;

#endif
