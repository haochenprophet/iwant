#ifndef VFIXUPIMMPD_H
#define VFIXUPIMMPD_H

#include "object/object.h"

namespace n_VFIXUPIMMPD {
	class CVFIXUPIMMPD :public Object
	{
	public:
		CVFIXUPIMMPD();
		~CVFIXUPIMMPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFIXUPIMMPD;

#endif
