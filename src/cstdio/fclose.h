#ifndef FCLOSE_H
#define FCLOSE_H

#include "../object.h"

namespace n_fclose {
	class Cfclose :public Object
	{
	public:
		Cfclose();
		~Cfclose();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fclose;

#endif
