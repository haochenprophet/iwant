#ifndef FPCLASSIFY_H
#define FPCLASSIFY_H

#include "object/object.h"

namespace n_fpclassify {
	class Cfpclassify :public Object
	{
	public:
		Cfpclassify();
		~Cfpclassify();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cfpclassify); }
		static int fpclassify_c(double x);
	};
}

using namespace n_fpclassify;

#endif
