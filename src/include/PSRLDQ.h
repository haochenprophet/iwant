#ifndef PSRLDQ_H
#define PSRLDQ_H

#include "../object.h"

namespace n_PSRLDQ {
	class CPSRLDQ :public Object
	{
	public:
		CPSRLDQ();
		~CPSRLDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRLDQ;

#endif
