#ifndef VIDEO_MESSAGE_H
#define VIDEO_MESSAGE_H

#include "message.h"

namespace n_video_message {
	class Cvideo_message :public Cmessage
	{
	public:
		Cvideo_message();
		~Cvideo_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_video_message;

#endif
