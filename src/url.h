#ifndef URL_H
#define URL_H

#include "uri.h"
#include "url_def.h"

namespace n_url {
	class Curl :public Curi
	{
	public:
		string prefix;
		string domain;
		string port;
	public:
		Curl();
	};

}
using namespace n_url;

#endif
