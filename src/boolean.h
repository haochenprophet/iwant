#ifndef BOOLEAN_H
#define BOOLEAN_H

#include "object.h"

namespace n_boolean {
	class Cboolean :public Object
	{
	public:
		Cboolean();
		int my_init(void *p=NULL);
	};
}

using namespace n_boolean;

#endif
