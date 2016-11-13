#ifndef http_H
#define http_H

#include "object.h"
#include "uri.h"
namespace n_http {
	class Chttp :public Object
	{
	public:
		Curi uri;
	public:
		Chttp();
	};

}
using namespace n_http;

#endif
