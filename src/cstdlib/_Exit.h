#ifndef _EXIT_H
#define _EXIT_H

#include "../object.h"

namespace n__Exit {
	class C_Exit :public Object
	{
	public:
		C_Exit();
		~C_Exit();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(C_Exit); }
		static void _Exit_c(int status);
	};
}

using namespace n__Exit;

#endif
