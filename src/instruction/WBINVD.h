#ifndef WBINVD_H
#define WBINVD_H

#include "../object.h"

namespace n_WBINVD {
	class CWBINVD :public Object
	{
	public:
		CWBINVD();
		~CWBINVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WBINVD;

#endif
