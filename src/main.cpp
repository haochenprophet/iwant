
#include "main.h"
#include "main_action.i"

#ifndef MAIN_TEST
#define MAIN_TEST 0//1
#endif

int Cmain::my_init(void *p)
{
	this->name = "Cmain";
	this->alias ="main";
	this->temp = MAIN_TEMP;
	this->s_tag="[tag]";
	return 0;
}

Cmain::Cmain()
{
	this->my_init();
}

int Cmain::is_exist_main(char *f_name)
{
	return this->is_exist_func(f_name,(char *)"main");
}

int Cmain::create_main_cmd(int argc, char *argv[])
{
	char * str_tag=nullptr;
	do{
		argc--;
		//AT_LINE std::cout<<"argv["<<argc<<"]="<<argv[argc]<<endl;//list all command line
		if(argc<2)	break;//action
		
		char * str_tag=(char *)argv[argc];
		if(false==this->is_identifier(str_tag)) //check str_tag 
		{
			if(false==this->is_path(str_tag))	return -1;//check str_tag is path
			str_tag=strrchr(str_tag,'/');
		#if WINDOWS_OS
			if(!str_tag) str_tag=strrchr(str_tag,'\\');
		#endif
			if(!str_tag) return -1;
			str_tag++ ; //skip '/' or '\'
	 	}
		
		this->tag_temp(str_tag);

		this->f_name=argv[argc];
		this->f_name+=".cpp";
		if(this->is_exist_main((char *) this->f_name.c_str())) continue;//exist main ()
		this->f_append((char *)this->temp.c_str());
		
	}while(argc>1);
	return -1;
}

int Cmain::do_action(void * a)
{
	//OUT_LINE //test 
	if (this->action == (ACTION_T)MainAtcion::create_main) this->create_main_cmd(this->argc,this->argv);
	return 0;
}

int Cmain::deal_cmd(int argc, char *argv[])
{
	//check user input
	if (argc < 3)
	{
		std::cout << "Cmain request cmd line input: <action> <file_list> \n";
		this->action_help(main_action, (int)MAIN_ACTION_COUNT);
		return -1;
	}
	this->argc = argc;//store user input parameter
	this->argv = argv;
	//get cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;
	//get action
	this->action = this->get_action(main_action, (int)MAIN_ACTION_COUNT, argv[1]);
	if (this->action == 0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;

	//do action
	this->do_action();

	return 0;
}

#if MAIN_TEST||_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MAIN_TEST\n\n";
	//Cuuid uuid;
	//std::cout << uuid.uuid << endl;

	Cmain m;
	return m.deal_cmd(argc,argv);
}
#endif
