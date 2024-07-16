#ifndef FILE_H
#define FILE_H

#include "memory/myMemory.h"
#include "algorithm/search.h"
#include "output/display.h"

#define CFILE_FILE_OUT "cfile.out"
namespace n_file {

	class Cfile :public CmyMemory
	{
	public:
		string f_name; //target file 
		string s_output_fname;//output file name ..swap out
		std::fstream ap_fs;//for Cfile::f_append()
		char* src_file;//source file for swap
		char* target_file;//source file for swap
		char* fname_left;//compare () file 1 default use left
		char* fname_right;//compare ()file 2 default use right
		char* diff_file;//out put diff to diff file 
		char* crc_func;//for crc() cmd 
		size_t swap_start, swap_size;
		DisplayType display_type;
	public:
		Cfile();
		Cfile(char* fname);
		~Cfile();
		int my_init(void* p=nullptr);
		int is_exist(char *filename);
		int is_exist();
		int f_append(char *filename, char * ap_str);
		int f_append(string filename, char * ap_str);
		int f_append(string *filename, string *ap_str);
		int f_append(char *filename, string ap_str);
		int f_append(char * ap_str);
		int f_append(string * ap_str);
		size_t f_size(char *f_name);
		size_t f_size();
		int f_read(char *f_name);
		int f_read();
		int checksum(char* f_name, unsigned int * sum = nullptr);
		int checksum();
		int crc(char* f_name, char* crc_func , unsigned int* sumchk_crc = nullptr);
		int crc(char* crc_func =nullptr);
		int md5(char* f_name);
		int md5();
		int before_md5(void* p = nullptr);
		int after_md5(void* p = nullptr);
		size_t f_write(char* f_name, void* addr, size_t size);
		size_t f_write(char* f_name, uint8_t* start, uint8_t* end);
		size_t f_write(char* f_name);//output filename
		int cat(size_t start=0,size_t size=-1,DisplayType t= DisplayType::string);
		int cut(char *file,long start=0,long size=-1,char *out_file=(char *)CFILE_FILE_OUT);
		int cut();
		int copy();
		int copy(char * from,char *to);
		char * f_find(char *f_name,char * str,char *start);
		char * f_find(char * str,char *start);
		int list(char* dir, char* term);
		int find(char* dir, char* term);
		int find_relpace(char* dir, char* term, char* find, char* target);
		int is_exist_func(char *f_name,char *func_name,int dispaly=0);//[space] <func_name> [space] (
		int func(void *p=nullptr);
		int create(void *p = nullptr);
		int rm (char * filename = nullptr);//remove file 
		int rn(char * oldname =nullptr, char * newname =nullptr);// rename 
		int compare(char* fname_left, char* fname_right);// compare 
		int compare();// compare 
		int different(char* fname_left, char* fname_right ,char * diff_log_file=(char *)"diff.log");
		int different(char* diff_log_file = (char *)"diff.log");
		int merge(int argc, char* argv[]);//add file[1]...file[n] outfile
		int replace(int argc, char* argv[]);
		int insert(int argc, char* argv[]);
		int swap(char* source_file, char* target_file, long start = 0, long size = -1, char* out_file = (char*)"out"); //src ==> target   to out_file
		int swap();
		int do_action(void * a= nullptr);
		int set_action_parameter(int argc, char* argv[]);//override the functions of the Objet class
		int deal_cmd(int argc, char *argv[]);
	};

}
using namespace n_file;

#endif
