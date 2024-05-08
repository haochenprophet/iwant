#ifndef VPTESTMD_H
#define VPTESTMD_H

#include "../object.h"

namespace n_VPTESTMD {
	class CVPTESTMD :public Object
	{
	public:
		CVPTESTMD();
		~CVPTESTMD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTMD;

#endif
