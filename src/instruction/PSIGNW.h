#ifndef PSIGNW_H
#define PSIGNW_H

#include "../object.h"

namespace n_PSIGNW {
	class CPSIGNW :public Object
	{
	public:
		CPSIGNW();
		~CPSIGNW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSIGNW;

#endif
