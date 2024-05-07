#ifndef SCASD_H
#define SCASD_H

#include "../object.h"

namespace n_SCASD {
	class CSCASD :public Object
	{
	public:
		CSCASD();
		~CSCASD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SCASD;

#endif
