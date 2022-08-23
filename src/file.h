#ifndef FILE_H
#define FILE_H

#include "myMemory.h"
#include "search.h"
#define CFILE_FILE_OUT "cfile.out"
namespace n_file {
	class Cfile :public CmyMemory
	{
	public:
		string f_name;
		string s_output_fname;//output file name
		std::fstream ap_fs;//for Cfile::f_append()

	public:
		Cfile();
		~Cfile();
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
		int cat();
		int cut(char *file,long start=0,long size=-1,char *out_file=(char *)CFILE_FILE_OUT);
		int cut();
		char * f_find(char *f_name,char * str,char *start);
		char * f_find(char * str,char *start);
		int is_exist_func(char *f_name,char *func_name,int dispaly=0);//[space] <func_name> [space] (
		int func(void *p=nullptr);
		int create(void *p = nullptr);
		int do_action(void * a= nullptr);
		int deal_cmd(int argc, char *argv[]);
	};

}
using namespace n_file;

#endif
