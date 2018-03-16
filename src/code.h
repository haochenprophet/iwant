#ifndef CODE_H
#define CODE_H

#include "object.h"

#define GLOBAL_CLASS "global_class"

namespace n_code {
	class Ccode :public Object
	{
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
		int create(char * cp)//cp point class name

	};
}

using namespace n_code;

#endif
