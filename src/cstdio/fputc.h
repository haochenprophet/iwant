#ifndef FPUTC_H
#define FPUTC_H

#include "../object.h"

namespace n_fputc {
	class Cfputc :public Object
	{
	public:
		Cfputc();
		~Cfputc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fputc;

#endif
