#ifndef INSERT_H
#define INSERT_H

#include "object.h"

namespace n_insert {
	
	class CinsertParameter
	{
	public:
		uint8_t * source_start;//input
		uint8_t * source_end;//input
		uint8_t * insert_offset;//input
		uint8_t * insert_data_start;//input
		uint8_t * insert_data_end;//input
		uint8_t * result_start;//output
		uint8_t * result_end;//output
	public:
		CinsertParameter();
		~CinsertParameter();
		void init();
		void clear();
		bool available();
	};

	class Cinsert :public Object
	{
	public:
		Cinsert();
		~Cinsert();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cinsert); }
		int allot_memory(CinsertParameter* p);
		int set(CinsertParameter* p, uint8_t* source_start,uint8_t* source_end,uint8_t* insert_offset,uint8_t* insert_data_start,uint8_t* insert_data_end);
		int insert(CinsertParameter* p);
	};
}

using namespace n_insert;

#endif
