#ifndef SCALBLN_H
#define SCALBLN_H

#include "../object.h"

namespace n_scalbln {
	class Cscalbln :public Object
	{
	public:
		Cscalbln();
		~Cscalbln();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cscalbln); }
	};
}

using namespace n_scalbln;

#endif
