#ifndef MATERIEL_VIDEO_H
#define MATERIEL_VIDEO_H

#include "../object.h"

namespace n_materiel_video {
	class Cmateriel_video :public Object
	{
	public:
		Cmateriel_video();
		~Cmateriel_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_video); }
	};
}

using namespace n_materiel_video;

#endif
