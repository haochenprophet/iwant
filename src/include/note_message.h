#ifndef NOTE_MESSAGE_H
#define NOTE_MESSAGE_H

#include "message.h"

namespace n_note_message {
	class Cnote_message :public Cmessage
	{
	public:
		Cnote_message();
		~Cnote_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_note_message;

#endif
