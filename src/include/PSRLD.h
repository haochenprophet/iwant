#ifndef PSRLD_H
#define PSRLD_H

#include "../object.h"

namespace n_PSRLD {
	class CPSRLD :public Object
	{
	public:
		CPSRLD();
		~CPSRLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRLD;

#endif
