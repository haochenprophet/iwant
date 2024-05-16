#ifndef SECURITY_AUDIO_H
#define SECURITY_AUDIO_H

#include "object/object.h"

namespace n_security_audio {
	class Csecurity_audio :public Object
	{
	public:
		Csecurity_audio();
		~Csecurity_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_audio); }
	};
}

using namespace n_security_audio;

#endif
