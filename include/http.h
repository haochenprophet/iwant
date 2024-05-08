#ifndef http_H
#define http_H

#include "object.h"
#include "uri.h"
#include "http_def.h"

namespace n_http {
	class Chttp :public Object
	{
	public:
		Curi uri;
		string version;// HTTP-Version   = "HTTP" "/" 1*DIGIT "." 1*DIGIT
	public:
		Chttp();
		int my_init(void *p=nullptr);

	};

}
using namespace n_http;

#endif
