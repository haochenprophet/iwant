#ifndef VPLZCNTQ_H
#define VPLZCNTQ_H

#include "../object.h"

namespace n_VPLZCNTQ {
	class CVPLZCNTQ :public Object
	{
	public:
		CVPLZCNTQ();
		~CVPLZCNTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPLZCNTQ;

#endif
