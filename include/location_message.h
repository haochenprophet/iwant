#ifndef LOCATION_MESSAGE_H
#define LOCATION_MESSAGE_H

#include "message.h"

namespace n_location_message {
	class Clocation_message :public Cmessage
	{
	public:
		Clocation_message();
		~Clocation_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_location_message;

#endif
