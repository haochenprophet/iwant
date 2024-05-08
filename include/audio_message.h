#ifndef AUDIO_MESSAGE_H
#define AUDIO_MESSAGE_H

#include "message.h"

namespace n_audio_message {
	class Caudio_message :public Cmessage
	{
	public:
		Caudio_message();
		~Caudio_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_audio_message;

#endif
