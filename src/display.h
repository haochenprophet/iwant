#ifndef DISPLAY_H
#define DISPLAY_H

#include "object.h"

namespace n_display {
	enum class DisplayType
	{
		string,
		ascii,
		hex,
		hex_offset,//hex + offset display
		decimal,
		decimal_offset,//decimal + offset display
	};

	class Cdisplay :public Object
	{
	public:
		Cdisplay();
		int my_init(void *p=nullptr);
		static inline void dispay_space(int space_count);
		void dispay_data(void* data, int data_type = 1);//byte=1,word=2,dword=4,qword=8
		static void display_hex(char* buf, size_t size, bool display_offset=true, bool tag_ascii=false, int space_count=2, int separate_count=16, int max_separate=16, char placeholder='.');
		static int display(uint8_t * start, uint8_t* end ,DisplayType t= DisplayType::string);
	};
}

using namespace n_display;

#endif
