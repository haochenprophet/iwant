#ifndef CMPSW_H
#define CMPSW_H

#include "../object.h"

namespace n_CMPSW {
	class CCMPSW :public Object
	{
	public:
		CCMPSW();
		~CCMPSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPSW;

#endif
