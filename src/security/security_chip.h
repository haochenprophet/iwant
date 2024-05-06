#ifndef SECURITY_CHIP_H
#define SECURITY_CHIP_H

#include "../object.h"

namespace n_security_chip {
	class Csecurity_chip :public Object
	{
	public:
		Csecurity_chip();
		~Csecurity_chip();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_chip); }
	};
}

using namespace n_security_chip;

#endif
