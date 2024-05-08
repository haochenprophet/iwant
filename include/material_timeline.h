#ifndef MATERIAL_TIMELINE_H
#define MATERIAL_TIMELINE_H

#include "../object.h"

namespace n_material_timeline {
	class Cmaterial_timeline :public Object
	{
	public:
		Cmaterial_timeline();
		~Cmaterial_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_timeline); }
	};
}

using namespace n_material_timeline;

#endif
