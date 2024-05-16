#ifndef MATERIEL_AUDIO_H
#define MATERIEL_AUDIO_H

#include "object/object.h"

namespace n_materiel_audio {
	class Cmateriel_audio :public Object
	{
	public:
		Cmateriel_audio();
		~Cmateriel_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_audio); }
	};
}

using namespace n_materiel_audio;

#endif
