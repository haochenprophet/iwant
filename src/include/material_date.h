#ifndef MATERIAL_DATE_H
#define MATERIAL_DATE_H

#include "../object.h"

namespace n_material_date {
	class Cmaterial_date :public Object
	{
	public:
		Cmaterial_date();
		~Cmaterial_date();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_date); }
	};
}

using namespace n_material_date;

#endif
