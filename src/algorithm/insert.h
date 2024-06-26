#ifndef INSERT_H
#define INSERT_H

#include "object/object.h"

namespace n_insert {
	
	enum class InsertType
	{
		none,
		before,//before find
		after,//after find
		string,//input string
		file,//input file
	};
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
		CinsertParameter insert_parameter;//public for other coding
	public:
		Cinsert();
		~Cinsert();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cinsert); }
		int allot_memory(CinsertParameter* p);
		int set(CinsertParameter* p, uint8_t* source_start,uint8_t* source_end,uint8_t* insert_offset,uint8_t* insert_data_start,uint8_t* insert_data_end);
		int set(CinsertParameter* p, uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size);
		int set(uint8_t* source_start, uint8_t* source_end, uint8_t* insert_offset, uint8_t* insert_data_start, uint8_t* insert_data_end);
		int set(uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size);
		int insert(CinsertParameter* p);
		int insert(CinsertParameter* p, int64_t line_number);
		int insert();
		int insert(int64_t line_number);
		int insert(CinsertParameter* p, uint8_t* find, size_t find_size, InsertType type=InsertType::after);
		int insert(uint8_t* find, size_t find_size, InsertType type);
		int insert(char* input_file, char* output_file, char* insert, int64_t line_number, InsertType type= InsertType::file);
		int insert(char* input_file, char* output_file, char* insert, size_t insert_offset, InsertType type = InsertType::file);//file offset insert
		int insert(char* input_file, char* output_file, char* insert, InsertType insert_type, char* find, InsertType find_type);
		int insert(int argc, char* argv[]);
	};
}

using namespace n_insert;

#endif
