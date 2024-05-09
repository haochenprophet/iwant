#ifndef REPLACE_H
#define REPLACE_H

#include "object.h"
#include "find.h"
#include "file/file.h"

namespace n_replace {

	enum class ReplaceType
	{
		none,
		string,
		file,
		memory,
		line,//replace one line
	};

	class CLocationRange
	{
	public:
		void* start;
		void* end;
		size_t size;//start_to_end_size;
	public:
		CLocationRange();
		size_t set_size(size_t size=0);
	};

	class CreplaceParameter
	{
	public:
		void* find_memory;//from_memory
		int64_t find_memory_size;
		void* to_memory;
		int64_t to_memory_size; //0
		void* replace_memory;
		int64_t replace_memory_size;
		int64_t find_count;//analyze set it
		int64_t total_change_size;//(replace_memory_size-find_memory_size)*find_count
		std::list<void*> location_list;//point [0] to find_count void* address , analyze() set it 
		std::list<CLocationRange> location_range_list;
		bool replace_to_memory_end;//include end find string will be replace
	public:
		CreplaceParameter();
		~CreplaceParameter();
	};

	class CreplaceMap//Map data
	{
	public:
		void* address;//replace_memory_address;
		int64_t size;//replace_memory_size
		CreplaceParameter* p;
	};

	class Creplace :public Object
	{
	public:
		void * source;
		int64_t source_size;
		std::list<CreplaceParameter*> parameter_list;
		int64_t total_size;//parameter_list need allot total size 
		int64_t map_total_count;//map total count 
		std::list<CreplaceMap> map;
		void * result;
		int64_t result_size;
		CreplaceParameter replace_parameter;//public data 
	public:
		Creplace();
		~Creplace();
		int my_init(void *p=nullptr);
		int build_map(CreplaceParameter* p);
		int64_t analyze(void* source, int64_t source_size, CreplaceParameter* p);
		int64_t analyze(void* source, int64_t source_size);
		int replace(void * source, int64_t source_size, CreplaceParameter* p, void** result_address, int64_t * result_size);
		int replace(void * source, void  * source_end,  CreplaceParameter* p, void** result_address, int64_t * result_size);
		int replace(void * source, int64_t source_size, CreplaceParameter* p);
		int replace(void * source, void  * source_end,  CreplaceParameter* p);
		int replace(void * source, void  * source_end);//will use this->parameter_list
		int replace(void * source, int64_t source_size);
		int replace(char* inputfile, char* outputfile, uint8_t* find_data, size_t find_size, uint8_t* replace_data, size_t replace_size, uint8_t* end_find_data =nullptr, size_t end_find_size=0);
		int replace(char* inputfile, char* outputfile, char* find_str, char* replace_str, uint8_t* end_find_data = nullptr, size_t end_find_size = 0);
		int replace(char* inputfile, char* outputfile, char* find_file, char* replace_file, int type, uint8_t* end_find_data = nullptr, size_t end_find_size = 0);//int type: for C++ overloaded replace() functions
		int replace(int argc, char* argv[]);
		int add_parameter_list(CreplaceParameter * p);
		void list_map();
	};
}

using namespace n_replace;

#endif
