#ifndef FREAD_H
#define FREAD_H

#include "../object.h"

namespace n_fread {
	class Cfread :public Object
	{
	public:
		Cfread();
		~Cfread();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fread;

#endif
