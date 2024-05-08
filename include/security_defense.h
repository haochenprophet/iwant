#ifndef SECURITY_DEFENSE_H
#define SECURITY_DEFENSE_H

#include "../object.h"

namespace n_security_defense {
	class Csecurity_defense :public Object
	{
	public:
		Csecurity_defense();
		~Csecurity_defense();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_defense); }
	};
}

using namespace n_security_defense;

#endif
