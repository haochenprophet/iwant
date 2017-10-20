#ifndef VPCONFLICTD_H
#define VPCONFLICTD_H

#include "object.h"

namespace n_VPCONFLICTD {
	class CVPCONFLICTD :public Object
	{
	public:
		CVPCONFLICTD();
		~CVPCONFLICTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCONFLICTD;

#endif
