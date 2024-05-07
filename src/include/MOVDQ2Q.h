#ifndef MOVDQ2Q_H
#define MOVDQ2Q_H

#include "../object.h"

namespace n_MOVDQ2Q {
	class CMOVDQ2Q :public Object
	{
	public:
		CMOVDQ2Q();
		~CMOVDQ2Q();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVDQ2Q;

#endif
