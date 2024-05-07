#ifndef LIFE_GAME_H
#define LIFE_GAME_H

#include "../object.h"

namespace n_life_game {
	class Clife_game :public Object
	{
	public:
		Clife_game();
		~Clife_game();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_game); }
	};
}

using namespace n_life_game;

#endif
