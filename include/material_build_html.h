#ifndef MATERIAL_BUILD_HTML_H
#define MATERIAL_BUILD_HTML_H

#include "../object.h"

namespace n_material_build_html {
	class Cmaterial_build_html :public Object
	{
	public:
		Cmaterial_build_html();
		~Cmaterial_build_html();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmaterial_build_html); }
	};
}

using namespace n_material_build_html;

#endif
