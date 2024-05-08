#ifndef WARSHIP_ATTACK_H
#define WARSHIP_ATTACK_H

#include "../object.h"

namespace n_warship_attack {
	class Cwarship_attack :public Object
	{
	public:
		Cwarship_attack();
		~Cwarship_attack();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_attack); }
	};
}

using namespace n_warship_attack;

#endif
