#include "text_encode.h"

TextEncode text_encode_tab[] =
{
	{TextEncodeID::BOM_UTF_8,(char*)"BOM_UTF-8"},
	{TextEncodeID::UTF_16_LE,(char*)"UTF-16 LE"},
	{TextEncodeID::UTF_16_BE,(char*)"UTF-16 BE"},
	{TextEncodeID::UTF_8,(char*)"UTF-8"},
	{TextEncodeID::ASCII,(char*)"ASCII"},
	{TextEncodeID::GB18030,(char*)"GB18030"},
};

#define TEXT_ENCODE_COUNT (sizeof(text_encode_tab)/sizeof(TextEncode))

bool TextEncode::isMe(TextEncodeID id)
{
	return (this->id == id);
}

bool TextEncode::isMe(int id)
{
	return (this->id == (TextEncodeID)id);
}

char * TextEncode:: my_name()
{
	return this->name;
}

int TextEncode::set_encode(TextEncodeID id)
{
	int n = 0;
	for (; n < TEXT_ENCODE_COUNT; n++)
	{
		if (text_encode_tab[n].isMe(id))
		{
			this->name = text_encode_tab[n].my_name();
			this->id = id;
			return 0;
		}
	}
	return -1;
}

int Ctext_encode::my_init(void *p)
{
	this->name = "Ctext_encode";
	this->alias = "text_encode";
	this->encode.id = TextEncodeID::UTF_8;
	this->encode.name = (char*)"UTF-8";
	return 0;
}

Ctext_encode::Ctext_encode()
{
	this->my_init();
}

Ctext_encode::~Ctext_encode()
{

}

#ifndef TEXT_ENCODE_TEST
#define TEXT_ENCODE_TEST 0//1
#endif

#if TEXT_ENCODE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
