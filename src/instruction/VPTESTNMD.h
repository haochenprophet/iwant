#ifndef VPTESTNMD_H
#define VPTESTNMD_H

#include "object/object.h"

namespace n_VPTESTNMD {
	class CVPTESTNMD :public Object
	{
	public:
		CVPTESTNMD();
		~CVPTESTNMD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTNMD;

#endif
