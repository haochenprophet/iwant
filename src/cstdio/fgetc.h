#ifndef FGETC_H
#define FGETC_H

#include "../object.h"

namespace n_fgetc {
	class Cfgetc :public Object
	{
	public:
		Cfgetc();
		~Cfgetc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fgetc;

#endif
