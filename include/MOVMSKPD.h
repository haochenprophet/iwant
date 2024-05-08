#ifndef MOVMSKPD_H
#define MOVMSKPD_H

#include "../object.h"

namespace n_MOVMSKPD {
	class CMOVMSKPD :public Object
	{
	public:
		CMOVMSKPD();
		~CMOVMSKPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVMSKPD;

#endif
