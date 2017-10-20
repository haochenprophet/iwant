#ifndef REPNZ_H
#define REPNZ_H

#include "object.h"

namespace n_REPNZ {
	class CREPNZ :public Object
	{
	public:
		CREPNZ();
		~CREPNZ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_REPNZ;

#endif
