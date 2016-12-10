#ifndef GET_H
#define GET_H

#include "object.h"

namespace n_get {
	class Cget :public Object
	{
	public:
		Cget();
		int my_init(void *p=NULL);
	};
}

using namespace n_get;

#endif
