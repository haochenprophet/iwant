#ifndef CAR_GAME_H
#define CAR_GAME_H

#include "../object.h"

namespace n_car_game {
	class Ccar_game :public Object
	{
	public:
		Ccar_game();
		~Ccar_game();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_game); }
	};
}

using namespace n_car_game;

#endif
