#ifndef TEXT_ENCODE_H
#define TEXT_ENCODE_H

#include "object/object.h"

namespace n_text_encode {

	enum class TextEncodeID
	{
		ASCII = 0,
		UTF_8 = 1,
		GB18030 = 2,
		BOM_UTF_8 = 0xBFBBEF,
		UTF_16_LE = 0xFEFF,
		UTF_16_BE = 0xFFFE,
	};

	class TextEncode
	{
	public:
		TextEncodeID    id;
		char * name;
	public :
		bool isMe(TextEncodeID id);
		bool isMe(int id);
		int set_name(TextEncodeID id);
		char * my_name();
	};

	class Ctext_encode :public Object
	{
	public:
		TextEncode encode;
	public:
		Ctext_encode();
		~Ctext_encode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctext_encode); }
	};
}

using namespace n_text_encode;

#endif
