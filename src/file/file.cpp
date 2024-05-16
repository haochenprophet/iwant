#include "file.h"
#include "file_action.i" //action_tab
#include <stdio.h>
#include "algorithm/replace.h"
#include "algorithm/insert.h"
#include "math/crc.h"
#include "math/md5.h"
#include "path/path.h"

int Cfile::my_init(void* p)
{
	this->name = "Cfile";
	this->alias = "file";
	this->fname_left = nullptr;
	this->fname_right = nullptr;
	this->crc_func = nullptr;
	this->display_type = DisplayType::string;
	return 0;
}

Cfile::Cfile()
{
	this->my_init();
}

Cfile::Cfile(char* fname)
{
	this->my_init();
	this->f_read(fname);
}

Cfile::~Cfile()
{
	if(this->ap_fs.is_open()) this->ap_fs.close();//Cfile::f_append
}

int Cfile::is_exist(char *filename)
{
	if(!filename) return -1;

	int ret=0;
	std::fstream fs;
	fs.open (filename, std::fstream::in);
	if(fs.good()) ret =1;
	fs.close();
	if (this->silent == 0) std::cout << "is_exist=" << ret << endl;
	return ret;
}

int Cfile::is_exist()
{
	if(this->f_name.empty()) return -1;
	return this->is_exist((char *)this->f_name.c_str());	
}

int Cfile::f_append(char *filename,char * ap_str)
{
	if( !(filename && ap_str) ) return -1;

	if(!this->ap_fs.is_open()) 
	{
		this->ap_fs.open (filename, std::fstream::in | std::fstream::out | std::fstream::app);
	}

	this->ap_fs << ap_str;
	this->ap_fs.close();
	return 0;
}

int Cfile::f_append(string *filename, string *ap_str)
{
	if (filename->empty()|| ap_str->empty()) return -1;
	return this->f_append((char *)filename->c_str(), ap_str->c_str());
}

int Cfile::f_append(string filename, char * ap_str)
{
	if (filename.empty()) return -1;
	return this->f_append((char *)filename.c_str(), ap_str);
}

int Cfile::f_append(char *filename, string ap_str)
{
	if (filename==nullptr|| ap_str.empty()) return -1;
	return this->f_append(filename, ap_str.c_str());
}


size_t Cfile::f_size(char *f_name)
{
	std::ifstream is (f_name, std::ifstream::binary);
	if (!is) return -1;	
	is.seekg (0, is.end);
	size_t len=is.tellg();
	is.close();
	if(this->silent==0) std::cout << f_name << " size=" << len << endl;
	return len;
}

size_t Cfile::f_size()
{
	if(this->size>0) return this->size-1;
	if(this->f_name.empty()) return -1;
	return this->f_size((char *)this->f_name.c_str());
}

int Cfile::f_read(char *f_name) //this->size=file_sile+1;'\0'
{
	std::ifstream is (f_name, std::ifstream::binary);
	if (!is) return -1;

	is.seekg (0, is.end);
	size_t len=is.tellg();

	this->allot(len+1,FileData_T,MY_MEMORY_REALLOT); // get size of file for allot memory

	if(nullptr==this->addr)
	{
		is.close();
		return -1;
	}

	is.seekg (0, is.beg);
	is.read (this->addr,len);// read data as a block:

	if (!is)
	{
		std::cout << "error: only " << is.gcount() << " could be read";
		this->error++;
	}

	this->addr[len]='\0';
	this->size=len;
	is.close();

	return 0;
}

int Cfile::f_read()
{
	if(this->f_name.empty()) return -1;
	return this->f_read((char *)this->f_name.c_str());
}

int Cfile::checksum(char* f_name,unsigned int * sum)
{
	unsigned int check_sum = 0;

	if(0!=this->f_read(f_name)) return -1;

	for (size_t i = 0; i < this->size; i++)
	{
		check_sum += (unsigned char) this->addr[i];
	}
	if (sum != nullptr) * sum = check_sum;
	if(this->silent==0)printf("check_sum=0x%08X\n", check_sum);
	return check_sum;
}

int Cfile::checksum()
{
	if (this->f_name.empty()) return -1;
	return this->checksum((char*)this->f_name.c_str());
}

int Cfile::crc(char* f_name,char * crc_func , unsigned int* chk_crc)
{
	unsigned int check_crc = 0;
	int ret = -1;

	if (0 != this->f_read(f_name)) return -1;
	Ccrc crc;
	//int Ccrc::execute(char* func_name, uint8_t * data, size_t length, uint32_t * crc)
	if (crc_func == nullptr)
	{
		ret=crc.execute((char*)"crc32", (uint8_t*)this->addr, (size_t)this->size, (uint32_t*)&check_crc);
	}
	else
	{
		ret = crc.execute(crc_func, (uint8_t*)this->addr, (size_t)this->size, (uint32_t*)&check_crc);
	}
	
	if (ret != 0) return ret;

	if (chk_crc != nullptr) *chk_crc = check_crc;
	if (this->silent == 0)printf("check_crc=0x%08X\n", check_crc);
	return ret;
}

int Cfile::crc(char* crc_func)
{
	if (this->f_name.empty()) return -1;
	return this->crc((char*)this->f_name.c_str(), crc_func);
}

int Cfile::md5(char* f_name)
{
	int ret;
	Cmd5 md5;
	ret=md5.file(f_name);
	md5.display();
	return ret;
}

int Cfile::md5()
{
	return this->md5((char*)this->f_name.c_str());
}

int Cfile::cat(size_t start, size_t size, DisplayType t)
{
	if(0!=this->f_read()) return -1;
	if (size == -1 || size > this->size) size = this->size;//check and set size
	if (start + size > this->size)size = this->size - start;//check start+ size
	//static int display(uint8_t * start, uint8_t * end, DisplayType t = DisplayType::string);
	Cdisplay::display((uint8_t*)(this->addr+ start), (uint8_t*)(this->addr + size), t);
	return 0;
}

int Cfile::cut(char *f_name,long start ,long size,char *out_file)
{
	this->f_read(f_name); 

	if(start >this->size)
	{
		printf("Cfile::cut start out of file size\n");
		return 0;
	} 

	FILE *fp;
	if(!(fp=fopen(out_file,"wb"))){
		printf("Error:can not create the %s file.\n",out_file);
		return -1;
	}
	
	if(size==-1||start+size>this->size) size =(long)this->size-start;

	fwrite(this->addr+start,sizeof(char),size,fp);
	fclose(fp);
	
	return size;
}

int Cfile::cut()
{
	return this->cut((char *)this->f_name.c_str(),this->range_start.data.l,this->range_amount.data.l,(char *)this->s_output_fname.c_str());
}

int Cfile::copy()
{
	return this->cut((char *)this->f_name.c_str(),0,-1,(char *)this->s_output_fname.c_str());
}

int Cfile::copy(char* from, char* to)
{
	return this->cut(from, 0, -1, to);
}

int Cfile::f_append(char * ap_str)
{
	if(this->f_name.empty()) return -1;
	return this->f_append((char *)this->f_name.c_str(),ap_str);
}

int Cfile::f_append(string * ap_str)
{
	return this->f_append((char *)ap_str->c_str());
}

char * Cfile::f_find(char *f_name,char * str,char *start)
{
	if(this->size==0||this->f_name!=f_name)
	{
		if(this->f_read(f_name)) return nullptr;
	}

	if(start==nullptr) start=this->addr;
	if(start>=(this->addr+this->size)) return nullptr;

	return strstr(start,str);
}

char * Cfile::f_find(char * str,char *start)
{
	return this->f_find((char *)this->f_name.c_str(),str,start);
}

int Cfile::find(char * dir, char * term)
{
	Cpath p;
	printf("dir=%s\\%s\n", dir, term);
	p.list(dir, term, 0, 1, 1);
	p.display();//test ok
	return 0;
}

int Cfile::find_relpace(char* dir, char* term,char * find,char* target)
{
	Cpath p;
	printf("dir=%s\\%s\n", dir, term);
	p.list(dir, term, 0, 1, 1);
//	p.display();//test ok
	p.execute(this);
	return 0;
}

// c/c++ function : return_type [space] <func_name> [space] (...)

int Cfile::is_exist_func(char *f_name,char *func_name,int dispaly)
{
	char *cp=nullptr;
	size_t len=strlen(func_name);

	while(1)
	{
		cp=this->f_find(f_name,func_name,cp);
		if(!cp) return 0;

		if( *(cp-1)!=' '&&*(cp-1)!='\t' )
		{
			cp+=len;continue;
		}

		if(dispaly) std::cout<<cp<<endl;
		cp+=len;

		if(*(cp)=='(') return 1;//c/c++ function
		for(;*cp==' '||*cp=='\t';cp++);
		if(*cp=='(') return 1;
	}
	return 0; 
}

int Cfile::func(void *p)
{
	if(!p) return -1;

	if (this->action == (ACTION_T)FileAtcion::fr|| this->action == (ACTION_T)FileAtcion::find_replace)
	{
	//	OUT_LINE;//test ok
		Creplace r;
		//argv[0]=exe ,[1]=fr [2]=dir,[3]=term,[4]=find string ,[5]=target string 
	#if WINDOWS_OS
		r.replace((wchar_t*) p, (wchar_t*) p, (char*)this->cmd.argv[4], (char*)this->cmd.argv[5]);
	#endif

	#if LINUX_OS
		r.replace((char*)p, (char*)p, (char*)this->cmd.argv[4], (char*)this->cmd.argv[5]);
	#endif
		return 0;
	}

	if (this->action == (ACTION_T)FileAtcion::read || this->action == (ACTION_T)FileAtcion::cat)
	{
		return this->f_read((char*)p);
	}
	return 0;

}

int Cfile::create(void *p)
{
	if (p == nullptr)
	{
		if (this->f_name.empty()) return -1;
		this->ap_fs.open(this->f_name.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
		return 0;
	}

	char *filename = (char *)p;
	this->f_name = filename;
	this->ap_fs.open(filename, std::fstream::in | std::fstream::out | std::fstream::trunc);
	return 0;
}

int Cfile::rm (char * filename)
{
	if(filename==nullptr) filename=(char *)this->f_name.c_str();
	
	//printf("filename=%s\n",filename);//test ok

	if( remove(filename) != 0 )
	{
		printf( "Error deleting file :%s\n",filename);
		return -1;
	}
	return 0;
}

int Cfile::rn(char * oldname , char * newname )//rename
{
	if(oldname==nullptr) oldname = (char * )this->f_name.c_str();
	if(newname==nullptr) newname = (char *) this->s_output_fname.c_str();

	if(0!= rename( oldname , newname ))
	{
		printf( "Error renaming file :%s ",oldname);
		return -1;
	}
	return 0;
}
//return 0: equivalent 1: not equivalent -1:error not compare
int Cfile::compare(char* fname_left, char* fname_right)// compare file 1 and file 2 if or not equivalent
{
	size_t left_size=f_size(fname_left);
	size_t right_size = f_size(fname_right);
	if (left_size != right_size) return 1;
	//if (left_size == right_size)
	{
		Cfile left(fname_left);//file 1
		Cfile right(fname_right);//file 2

		if (left.size != right.size) return -1;

		for (size_t i = 0; i < left.size; i++)
		{
			if (left.addr[i] != right.addr[i]) return 1;
		}
	}

	return 0;
}

int Cfile::compare()// compare 
{
	if (this->fname_left == nullptr || this->fname_right == nullptr) return -1;
	//int Cfile::compare(char* fname_left, char* fname_right)
	int ret = this->compare(this->fname_left, this->fname_right);
	if(ret == 0)  printf("file : %s == %s\n", this->fname_left, this->fname_right);
	if(ret == 1)  printf("file : %s != %s\n", this->fname_left, this->fname_right);
	if(ret == -1) printf("Error occur when compare file : %s and %s\n", this->fname_left, this->fname_right);
	return ret;
}

size_t Cfile::f_write(char* f_name,void *addr , size_t size)
{
	FILE* fp;
	size_t ret;
	if (!(fp = fopen(f_name, "wb"))) {
		printf("Error:can not create the %s file.\n", f_name);
		return -1;
	}
	ret=fwrite(addr,1, size, fp);
	fclose(fp);
	return ret;
}

size_t Cfile::f_write(char* f_name, uint8_t* start, uint8_t* end)
{
	if (end <= start) return -1;
	return this->f_write(f_name, (void*)start, (size_t)(end - start));
}

size_t Cfile::f_write(char* f_name)
{
	return this->f_write(f_name, this->addr, this->size);
}

#if LINUX_OS
int Cfile::merge(int argc, char* argv[])//add[0] file[1]...file[n] outfile
{
	string cmd;
	cmd = (char*)"cat ";
	for (int n = 1; n < argc; n++)//build copy command
	{
		if (n == argc - 1) cmd += (char*)" > ";
		cmd += argv[n];
		cmd += (char*)" ";
	}
	std::cout << cmd << endl;//test
	return system(cmd.c_str());//run copy command

	return 0;
}
#endif

#if WINDOWS_OS
int Cfile::merge(int argc, char* argv[])//argv[0]=add  argv[1]=file[1]...file[n] outfile
{
	string cmd;
	cmd = (char *)"copy /B ";
	for (int n = 1; n < argc; n++)//build copy command
	{
		cmd += argv[n];
		cmd += (char*)" ";
		if (n >= 1 && n < argc - 2) cmd += (char*)"+ ";
		
	}
	std::cout << cmd << endl;//test
	return system(cmd.c_str());//run copy command
}
#endif

//main(argc >6) "argv[0]=replace argv[1]=<InFileName> argv[2]=<OutFileName> argv[3]=<find>  argv[4]<replace> argv[5]=<S/F>"
int Cfile::replace(int argc, char* argv[])
{
	Creplace r;
	if (argc < 6)//check input 
	{
		printf("The number of input parameters is less than the 'replace' or 'rp' command requirement.\n");
		return -1;
	}
	//int Creplace::replace(int argc, char* argv[])
	return r.replace(argc,argv);
}
///main(argc >7) argv[0]=insert argv[1]=<input_file> argv[2]=<output_file> argv[3]=<instert_data> argv[4]<data_type:F:file S:string>  argv[5]=<offset/linue_number/find_data>  argv[6]<L:linue_number O:insert_offset B:find_data Before A:find_data after>
int Cfile::insert(int argc, char* argv[])
{
	Cinsert i;
	if (argc < 7)//check input 
	{
		printf("The number of input parameters is less than the 'insert' or 'ins' command requirement.\n");
		return -1;
	}
	//int Cinsert::insert(int argc, char* argv[])//command line interface
	return i.insert(argc, argv);
}

int Cfile::do_action(void * a)
{
	if (this->action == (ACTION_T)FileAtcion::read) this->set_main_ret(this->cat());
	if (this->action == (ACTION_T)FileAtcion::cat) this->set_main_ret(this->cat(this->range_start.data.l, this->range_amount.data.l,this->display_type));
	if (this->action == (ACTION_T)FileAtcion::cut) this->set_main_ret(this->cut());
	if (this->action == (ACTION_T)FileAtcion::copy||this->action == (ACTION_T)FileAtcion::cp) this->set_main_ret(this->copy());
	if (this->action == (ACTION_T)FileAtcion::create||this->action == (ACTION_T)FileAtcion::add) this->set_main_ret(this->create());

	if (this->action == (ACTION_T)FileAtcion::remove||this->action == (ACTION_T)FileAtcion::rm|| \
		this->action == (ACTION_T)FileAtcion::_delete||this->action == (ACTION_T)FileAtcion::del) this->set_main_ret(this->rm());//remove

	if (this->action == (ACTION_T)FileAtcion::rename||this->action == (ACTION_T)FileAtcion::rn|| \
		this->action == (ACTION_T)FileAtcion::move||this->action == (ACTION_T)FileAtcion::mv) this->set_main_ret(this->rn());//rename
	if (this->action == (ACTION_T)FileAtcion::exist||this->action == (ACTION_T)FileAtcion::ex) this->set_main_ret(this->is_exist());
	if (this->action == (ACTION_T)FileAtcion::size || this->action == (ACTION_T)FileAtcion::sz) this->set_main_ret((int)this->f_size());
	if (this->action == (ACTION_T)FileAtcion::merge || this->action == (ACTION_T)FileAtcion::merge_op) this->set_main_ret((int)this->merge(this->cmd.argc-1,&this->cmd.argv[1]));
	if (this->action == (ACTION_T)FileAtcion::replace || this->action == (ACTION_T)FileAtcion::rp) this->set_main_ret((int)this->replace(this->cmd.argc - 1, &this->cmd.argv[1]));
	if (this->action == (ACTION_T)FileAtcion::compare || this->action == (ACTION_T)FileAtcion::fc) this->set_main_ret((int)this->compare());
	if (this->action == (ACTION_T)FileAtcion::insert || this->action == (ACTION_T)FileAtcion::ins) this->set_main_ret((int)this->insert(this->cmd.argc - 1, &this->cmd.argv[1]));
	if (this->action == (ACTION_T)FileAtcion::checksum || this->action == (ACTION_T)FileAtcion::chksum) this->set_main_ret((int)this->checksum());
	if (this->action == (ACTION_T)FileAtcion::crc) this->set_main_ret((int)this->crc(this->crc_func));
	if (this->action == (ACTION_T)FileAtcion::md5) this->set_main_ret((int)this->md5());
	if (this->action == (ACTION_T)FileAtcion::find || this->action == (ACTION_T)FileAtcion::fd) this->set_main_ret((int)this->find(this->cmd.argv[2], this->cmd.argv[3]));
	if (this->action == (ACTION_T)FileAtcion::fr || this->action == (ACTION_T)FileAtcion::find_replace) this->set_main_ret((int)this->find_relpace(this->cmd.argv[2], this->cmd.argv[3], this->cmd.argv[4], this->cmd.argv[5]));
	return 0;
}

//set file action parameter from user input command line 
//argv[0]=exe or system cmd , argv[1]=action , argv[2]= action parameter[1],  argv[3]= action parameter[2]  argv[4]= action parameter[3]  ..silent ; argc = index +1 
int Cfile::set_action_parameter(int argc, char* argv[])//override the functions of the Objet class
{
	//init file action parameter; cmd:cat /cut option:  <FileName> [start] [size] [outfilename]
	this->f_name = argv[2];
	//
	if (this->action == (ACTION_T)FileAtcion::crc)
	{
		if (argc > 3 && 0 != strstr(argv[3], (char*)"crc")) this->crc_func = argv[3]; //check if or not input set crc function 
		else this->crc_func = nullptr;
	}
	//set file command cut parameter
	if (this->action == (ACTION_T)FileAtcion::cut)
	{
		//[start] ,this->range_amount.data.l,(char *)this->s_output_fname.c_str());
		if (argc > 3) { this->range_start.data.l = (long)atoll(argv[3]); }
		else { this->range_start.data.l = 0; }
		//[size]
		if (argc > 4) { this->range_amount.data.l = (long)atoll(argv[4]); }
		else { this->range_amount.data.l = -1; }
		//[outfilename]
		if (argc > 5) { this->s_output_fname = argv[5]; }
		else { this->s_output_fname = (char*)CFILE_FILE_OUT; }
	}

	//set file command cat parameter
	if (this->action == (ACTION_T)FileAtcion::cat)
	{
		if (argc > 3) { this->range_start.data.l = (long)atoll(argv[3]); }
		else { this->range_start.data.l = 0; }//default min
		//[size]
		if (argc > 4) { this->range_amount.data.l = (long)atoll(argv[4]); }
		else { this->range_amount.data.l = -1; }//default max
		//[DisplayType={string,hex,hex_offset}
		if (argc > 5) {
			if (0 == strcmp(argv[5], (char*)"string")) this->display_type = DisplayType::string;
			if (0 == strcmp(argv[5], (char*)"hex")) this->display_type = DisplayType::hex;
			if (0 == strcmp(argv[5], (char*)"hex_offset")) this->display_type = DisplayType::hex_offset;
		}
		else {
			this->display_type = DisplayType::string;//default
		}
	}

	//set file commad  copy,rename,move parameter
	if (this->action == (ACTION_T)FileAtcion::copy || this->action == (ACTION_T)FileAtcion::cp ||
		this->action == (ACTION_T)FileAtcion::rename || this->action == (ACTION_T)FileAtcion::rn ||
		this->action == (ACTION_T)FileAtcion::move || this->action == (ACTION_T)FileAtcion::mv
		)
	{
		//[outfilename]
		if (argc > 3) { this->s_output_fname = argv[3]; }
		else { this->s_output_fname = (char*)CFILE_FILE_OUT; }
	}

	//set file commad compare action parameter: "compare   <FileName1> <FileName2>"
	if (this->action == (ACTION_T)FileAtcion::compare || this->action == (ACTION_T)FileAtcion::fc)
	{
		if (argc > 3) { //uset out file for right 
			this->fname_left = argv[2];//FileName1
			this->fname_right = argv[3]; //FileName2
		}
		else {// input error return 
			this->action_help(file_action, (int)FILE_ACTION_COUNT); return -1;
		}
	}
	
	//command:file.exe find  <dir> <term> 
	if (this->action == (ACTION_T)FileAtcion::find_replace || this->action == (ACTION_T)FileAtcion::fr)
	{
		if (argc > 3) { //uset out file for right 
		}
		else {// input error return 
			this->action_help(file_action, (int)FILE_ACTION_COUNT); return -1;
		}
	}

	//command:file.exe fr   <dir> <term> <find string> <target string>
	if (this->action == (ACTION_T)FileAtcion::find_replace || this->action == (ACTION_T)FileAtcion::fr)
	{
		if (argc > 5) { //uset out file for right 
		}
		else {// input error return 
			this->action_help(file_action, (int)FILE_ACTION_COUNT); return -1;
		}
	}
	return 0;
}

int Cfile::deal_cmd(int argc, char *argv[])
{
	//this->list_cmd(argc, argv);//test ok
	
	//step1.check user input
	if (argc < 3)
	{
		this->action_help(file_action, (int)FILE_ACTION_COUNT);
		return -1;
	}

	//step2.init this->cmd store user input parameter
	this->cmd.argc = argc;//store user input parameter
	this->cmd.argv = argv;

	//step3.get silent cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;

	//step4.get action
	this->action = this->get_action(file_action, (int)FILE_ACTION_COUNT, argv[1]);
	if (this->action == 0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;

	//step5.set action parameter
	if(0!=this->set_action_parameter(argc, argv)) return -1;

	//step6.do action 
	this->do_action();

	return 0;
}

#ifndef FILE_TEST
#define FILE_TEST 0//1
#endif

#if FILE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	Cfile f;
	f.deal_cmd(argc, argv);
	return 	f.main_return_value;//this->set_main_ret
}
#endif
