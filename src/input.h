#ifndef INPUT_H 
#define INPUT_H

namespace n_input {
	enum class InputType{
		none=0,
//computer
		scan,
		record, 
		url,
		audio,
		vedio, 
		file, 
		memory, 
		dma, 
		xml, 
		sql, //database
		mail, 
		gpio, 
		reg,
//device
		antenna, 
		sensor,  
//biological
		eye,
		nose, 
		mouth,
	};

	class Oinput //Object 's input O:for class Object ,can be used to x-sensor
	{
	public:
		InputType type;
		void * parameter;//can be used point  class Cparameter * store input data.
	public:
		Oinput() { this->type = InputType::none; this->parameter = nullptr; }
		//set
		int set(void* p, InputType t) { this->parameter = p; this->type = t; }
		//computer
		virtual int scan(void *p=nullptr) { return -1; }//p:parameter ,i:input
		virtual int record(void *p=nullptr) { return -1; } //input from record
		virtual int url(void *p=nullptr) { return -1; } //input from url
		virtual int audio(void *p=nullptr) { return -1; }//input from audio
		virtual int vedio(void *p=nullptr) { return -1; } //input from mail 
		virtual int file(void *p=nullptr) { return -1; } //input from file ,p point file name
		virtual int memory(void *p=nullptr) { return -1; } //input from memory ,p point file name
		virtual int dma(void *p=nullptr) { return -1; } //input from dma
		virtual int xml(void *p=nullptr) { return -1; } //input from xml 
		virtual int sql(void *p=nullptr) { return -1; } //input from database 
		virtual int mail(void *p=nullptr) { return -1; } //input from mail 
		virtual int gpio(void *p=nullptr) { return -1; } //input from gpio pin of hardware 
		virtual int reg(void *p=nullptr) { return -1; } //input from register 
		//device
		virtual int antenna(void *p=nullptr) { return -1; } //input from ear 
		virtual int sensor(void *p=nullptr) { return -1; } //input from ear 
		 //biological
		virtual int eye(void *p=nullptr) { return -1; } //input from eye 
		virtual int nose(void *p=nullptr) { return -1; } //input from nose 
		virtual int ear(void *p=nullptr) { return -1; } //input from ear 
		virtual int mouth(void *p=nullptr) { return -1; } //input from ear 
		 //
	};

}
using namespace n_input;

#endif
