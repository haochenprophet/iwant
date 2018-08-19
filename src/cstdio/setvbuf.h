#ifndef SETVBUF_H
#define SETVBUF_H

#include "../object.h"

namespace n_setvbuf {
	class Csetvbuf :public Object
	{
	public:
		Csetvbuf();
		~Csetvbuf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_setvbuf;

#endif
