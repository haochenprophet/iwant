#ifndef SCASW_H
#define SCASW_H

#include "../object.h"

namespace n_SCASW {
	class CSCASW :public Object
	{
	public:
		CSCASW();
		~CSCASW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SCASW;

#endif
