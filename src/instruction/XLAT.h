#ifndef XLAT_H
#define XLAT_H

#include "object/object.h"

namespace n_XLAT {
	class CXLAT :public Object
	{
	public:
		CXLAT();
		~CXLAT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XLAT;

#endif
