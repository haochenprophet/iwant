#ifndef TEXT_TYPE_H
#define TEXT_TYPE_H

#include "object/object.h"

namespace n_text_type {
	enum class TextType {
		text,
		c,
		cpp,
		java,
		py,
		php,
		js,
		mak,
		ini,
		inf,
		dec,
		dsc,
		fdf,
		html,
		asp,
		cs,
		bat,
		sh,
		xml,
		pdf,

	};

	class Ctext_type :public Object
	{
	public:
		Ctext_type();
		~Ctext_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_type); }
	};
}

using namespace n_text_type;

#endif
