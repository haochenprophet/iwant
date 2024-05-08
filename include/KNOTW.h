#ifndef KNOTW_H
#define KNOTW_H

#include "../object.h"

namespace n_KNOTW {
	class CKNOTW :public Object
	{
	public:
		CKNOTW();
		~CKNOTW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KNOTW;

#endif
