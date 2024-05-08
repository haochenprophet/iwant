#ifndef RADAR_RECONNOITRE_H
#define RADAR_RECONNOITRE_H

#include "../object.h"

namespace n_radar_reconnoitre {
	class Cradar_reconnoitre :public Object
	{
	public:
		Cradar_reconnoitre();
		~Cradar_reconnoitre();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_reconnoitre); }
	};
}

using namespace n_radar_reconnoitre;

#endif
