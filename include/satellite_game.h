#ifndef SATELLITE_GAME_H
#define SATELLITE_GAME_H

#include "../object.h"

namespace n_satellite_game {
	class Csatellite_game :public Object
	{
	public:
		Csatellite_game();
		~Csatellite_game();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_game); }
	};
}

using namespace n_satellite_game;

#endif
