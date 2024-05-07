#ifndef MAP_MESSAGE_H
#define MAP_MESSAGE_H

#include "message.h"

namespace n_map_message {
	class Cmap_message :public Cmessage
	{
	public:
		Cmap_message();
		~Cmap_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_map_message;

#endif
