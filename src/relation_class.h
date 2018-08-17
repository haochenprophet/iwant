#ifndef RELATION_CLASS_H 
#define RELATION_CLASS_H

#include "object.h"

namespace n_relation {
	class Crelation :public Object
	{
	public:
		int my_init(void *p=nullptr);
		Crelation();
	};
}
using namespace n_relation;

#endif