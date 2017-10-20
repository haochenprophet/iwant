#ifndef KANDD_H
#define KANDD_H

#include "object.h"

namespace n_KANDD {
	class CKANDD :public Object
	{
	public:
		CKANDD();
		~CKANDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDD;

#endif
