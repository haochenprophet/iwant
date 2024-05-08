#ifndef VREDUCESS_H
#define VREDUCESS_H

#include "../object.h"

namespace n_VREDUCESS {
	class CVREDUCESS :public Object
	{
	public:
		CVREDUCESS();
		~CVREDUCESS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VREDUCESS;

#endif
