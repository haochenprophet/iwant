#ifndef NEW_H
#define NEW_H

#include "../object.h"

namespace n_new {

	class Cnew :public Object
	{
	public:
		Cnew();
		int func(void *p); 
	};

}
using namespace n_new;

#endif
