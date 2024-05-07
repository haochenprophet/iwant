#ifndef URL_MESSAGE_H
#define URL_MESSAGE_H

#include "message.h"

namespace n_url_message {
	class Curl_message :public Cmessage
	{
	public:
		Curl_message();
		~Curl_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_url_message;

#endif
