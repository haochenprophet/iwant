#ifndef FSETPOS_H
#define FSETPOS_H

#include "../object.h"

namespace n_fsetpos {
	class Cfsetpos :public Object
	{
	public:
		Cfsetpos();
		~Cfsetpos();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fsetpos;

#endif
