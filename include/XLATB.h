#ifndef XLATB_H
#define XLATB_H

#include "../object.h"

namespace n_XLATB {
	class CXLATB :public Object
	{
	public:
		CXLATB();
		~CXLATB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XLATB;

#endif
