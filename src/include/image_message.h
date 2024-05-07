#ifndef IMAGE_MESSAGE_H
#define IMAGE_MESSAGE_H

#include "message.h"

namespace n_image_message {
	class Cimage_message :public Cmessage
	{
	public:
		Cimage_message();
		~Cimage_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_image_message;

#endif
