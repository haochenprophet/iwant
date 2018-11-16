#ifndef TRACK_MESSAGE_H
#define TRACK_MESSAGE_H

#include "message.h"

namespace n_track_message {
	class Ctrack_message :public Cmessage
	{
	public:
		Ctrack_message();
		~Ctrack_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_track_message;

#endif
