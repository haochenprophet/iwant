#ifndef SECURITY_VIDEO_H
#define SECURITY_VIDEO_H

#include "object/object.h"

namespace n_security_video {
	class Csecurity_video :public Object
	{
	public:
		Csecurity_video();
		~Csecurity_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_video); }
	};
}

using namespace n_security_video;

#endif
