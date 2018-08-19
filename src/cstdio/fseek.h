#ifndef FSEEK_H
#define FSEEK_H

#include "../object.h"

namespace n_fseek {
	class Cfseek :public Object
	{
	public:
		Cfseek();
		~Cfseek();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fseek;

#endif
