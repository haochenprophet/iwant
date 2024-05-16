#ifndef KSHIFTLW_H
#define KSHIFTLW_H

#include "object/object.h"

namespace n_KSHIFTLW {
	class CKSHIFTLW :public Object
	{
	public:
		CKSHIFTLW();
		~CKSHIFTLW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTLW;

#endif
