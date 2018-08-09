#include "object.h"

#ifndef OBJECT_TEST
#define OBJECT_TEST 0//1
#endif

Cparameter::Cparameter()
{
	this->in=nullptr;
	this->out=nullptr;
	this->size=0;
}

Cparameter::~Cparameter()
{
	while (!this->s.empty()) this->s.pop(); //exit clear stack 
}

CtagItem::CtagItem()
{
	this->status = 0;
}

CtagItem::CtagItem(string tag,string temp,string replace)
{
	this->tag=tag;this->temp=temp;this->replace=replace;	this->status = 0;
}

CtagItem::CtagItem(char* tag,char* temp,char* replace)
{
	this->tag=tag;this->temp=temp;this->replace=replace;	this->status = 0;
}

Cmyfunc::Cmyfunc(string fun_name, MyFunc  func)
{
	this->name = fun_name;
	this->alias = this->name;
	this->p_func = func;
	this->priority = 0;
}

int Cmyfunc::isMe(char *identifier)
{
	if (this->name == identifier) return (int)this->name.length();
	if (this->alias == identifier) return (int)this->alias.length();
	return 0;
}

int Cmyfunc::isMe(string * identifier)
{
	if (this->name == *identifier) return (int)this->name.length();
	if (this->alias == *identifier) return (int)this->alias.length();
	return 0;
}

int Cmyfunc::isMe(string identifier)
{
	if (this->name == identifier) return (int)this->name.length();
	if (this->alias == identifier) return (int)this->alias.length();
	return 0;
}

int Cmyfunc::runMe(void *p, bool new_thread)
{
	if (!this->p_func)	return -1;
	this->priority++;
	if (new_thread == false)
		return this->p_func(p);
	//std::cout << "Cmyfunc::runMe->thread\n"; //test ok
	std::thread(this->p_func, p).detach();
	return 0;
}

int object_func(void *p)//this ext function for object class
{
	if (!p) return -1;
	char *cp =(char *) p;
	std::cout << "object_func:"<<cp<<endl;//test
	return 0;
}

long object_id = 0;
Object::Object()
{
	this->id = ++object_id;
	this->status=0;
	this->silent =0;
	this->priority = 0;
	this->action=0;
	this->error=0;
	this->locate = -1;
	this->name = "Object";
	this->alias = this->name;
	this->s_tag="[tag]";
	this->name += std::to_string(object_id);//change name for nam +=id
	this->description=this->name;
	this->add_ex_func("objec_func", object_func);
	this->add_ex_func("runcmd", runcmd);
	//this->addMe();//remove add this to family list

	time (&this->at_time);
	this->start_time=this->at_time;
	this->end_time=this->at_time;
	this->tm_start = localtime (&this->start_time);//init tm
	this->tm_at = localtime (&this->at_time);
	this->tm_end = localtime (&this->end_time);

	this->at_clock=clock();
	this->start_clock=at_clock;
	this->end_clock=at_clock;

	this->language=EnglishLanguage;
	this->count=0;
	this->direction=0;
	this->value=0;
	this->velocity=0;
	this->cin_buf=nullptr;
	this->cin_buf_len=O_BUF_LEN;//defatult =O_BUF_LEN for allot buf

#if OBJECT_DEBUG
	AT_LINE this->myName();
#endif
}

Object::~Object()
{
#if OBJECT_DEBUG
	AT_LINE this->myName();
#endif
	this->family.clear();
	this->ex_func.clear();
	this->l_tag_rule.clear();
	this->l_audio.clear();
	this->l_image.clear();
	this->l_url.clear();
	this->l_style.clear();
	//this->remove_exist_family();// error exception !!
	this->exist_family.clear();
	this->clear_my_memory();//clear my memory
	this->my_mem.clear();
	this->clear_exist();
	this->exist_list.clear();
	if(this->cin_buf) delete[] this->cin_buf;
}

int Cobject::my_init(void *p)
{
	this->name = "Cobject";
	this->alias = "object";
	return 0;
}

Cobject::Cobject()
{
	this->my_init();
}

void Object::myName(Object *o)
{
	if(o)
	{
		std::cout << "name:" << o->name << " alias:"<<o->alias <<" id:"<< o->id <<" uuid:"<<o->uuid<<" at:"<<o->where()<< endl;
		return;
	}
	std::cout << "name:" << this->name << " alias:"<<this->alias <<" id:"<< this->id << " uuid:" << this->uuid <<" at:"<<this->where()<< endl;
}

void Object::addMe(Object * o)
{
	if (o) {
		this->family.push_back(o);
		o->exist_family.push_back(this);
	}
	else this->family.push_back(this);
}

void Object::removeMe(void * item)
{
	this->family.remove(item);
}

void Object::remove_exist_family()
{
	Object *o;
#if OBJECT_DEBUG
	AT_LINE this->myName();
#endif
	while (!this->exist_family.empty())
	{
		o=(Object *)this->exist_family.back();
		o->removeMe(this);
		this->exist_family.pop_back();
	}
}

int Object::sort_family(void *p) 
{
	int count = 0;
	LIST_FAMILY::iterator it;
	Object *op;
	for (it = this->family.begin(); it != this->family.end(); ++it)
	{
		op = (Object *)*it;
		std::cout << this->name << ":" << ++count << ":" << op->name << ":" << op->where() << endl;
	}
	std::cout << this->name << " my_family count : " << count << endl;
	return count;
}

int Object::isMe(char *identifier)
{
	if (this->name == identifier) return (int)this->name.length();
	if (this->alias == identifier) return (int)this->alias.length();
	return 0;
}

int Object::isMe(string * identifier)
{
	if (this->name ==* identifier) return (int)this->name.length();
	if (this->alias == *identifier) return (int)this->alias.length();
	return 0;
}

int Object::isMe(string identifier)
{
	if (this->name == identifier) return (int)this->name.length();
	if (this->alias == identifier) return (int)this->alias.length();
	return 0;
}

int Object::isMe(int id)
{
	if (this->id == id) return (int)this->name.length();
	return 0;
}

bool Object::add_ex_func(string fun_name, MyFunc func)
{
	Cmyfunc f(fun_name, func);
	this->ex_func.push_back(f);
	return true;
}

void Object::add_memory(Object *m)
{
	this->my_mem.push_back(m);
	m->exist_list.push_back(this);//this Object 
}

void Object::clear_my_memory(Object *m)
{
	if (m)
	{
		m->exist_list.remove(this);
		this->my_mem.remove(m);
		return;
	}

	Object *p;
	while (!this->my_mem.empty())
	{
		p=this->my_mem.back();
		p->exist_list.remove(this);
		this->my_mem.pop_back();
	}
}

void Object::clear_exist()
{
	Object *o;
	while (!this->exist_list.empty())
	{
		o = (Object *)this->exist_list.back();
		o->my_mem.remove(this);
		this->exist_list.pop_back();
	}
}

int Object::my_family()
{
	int count = 0;
	LIST_FAMILY::iterator it;
	Object *op;
	for (it = this->family.begin(); it != this->family.end(); ++it)
	{
		op = (Object *)*it;
		std::cout << "[" << ++count << "] "; op->myName();
	}
	std::cout << this->name << " my_family count : " << count << endl;
	return count;
}

int Object::my_ex_func()
{
	int count = 0;
	LIST_CMYFUNC::iterator it;
	for (it = this->ex_func.begin(); it != this->ex_func.end(); ++it)
	{
		std::cout <<this->name<<":"<<++count << ":" << it->name << it->p_func << endl;
	}
	std::cout << this->name << " my_ex_func count : " << count << endl;
	return count;
}

void Object::my_temp()
{
	if (this->temp.length())	std::cout << this->temp << endl;
}

int Object::inc_error()
{
	return this->error++;
}

int Object::is_error()
{
	return this->error;
}

int Object::get_error()
{
	return this->error;
}

int Object::set_count(int ct)
{
	this->count=ct;
	return this->count;
}

int Object::get_count()
{
	return this->count;
}

bool Object::get_s(char ** s ,int size)
{
	if(size<1) return false;
	if(*s==nullptr)
	{
		if(size!=this->allot(size,(void **)s)) return false;
	}
	std::cin.get(*s,size);
	return std::cin.good();
}

bool Object::wait_cin(int size)
{
	if(size <1) return false;
	if(size>this->cin_buf_len)
	{
		if(this->cin_buf)
		{
			size=this->allot(this->cin_buf_len, (void **) &this->cin_buf,size,false);
		}

		this->cin_buf_len=size;
	}

	return this->get_s(&this->cin_buf,this->cin_buf_len);
}

char * Object::at_cin_buf(char * str)
{
	if(!this->cin_buf) return nullptr;
	return strstr(this->cin_buf,str);
}

void Object::my_syntax()
{
	if (this->syntax.length())std::cout << this->syntax << endl;
}

int Object::execute()
{
#if OBJECT_DEBUG
	AT_LINE this->myName();
#endif
	return -1;//return -1 do nothing.
}

int Object::execute(Object *o)
{
	if (!o) return -1;
	return o->execute();
}

int Object::execute(Object *o, string obj_name, string fun_name, void * p, bool new_thread)
{
	return this->execute(o, &obj_name, &fun_name, p, new_thread);
}

int Object::execute(Object *o, string *obj_name, string * fun_name, void * p, bool new_thread)
{
	int ret = -1;
	if (!o) return this->execute();
	if (o->family.empty()) return -1;

	LIST_FAMILY::iterator it;
	Object *op;

	for (it = o->family.begin(); it != o->family.end(); ++it)
	{
		op = (Object *)*it;

		if (obj_name&&obj_name->empty() == false&& op->isMe(obj_name)) 
		{
			if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
			else ret = op->execute();
		}
		else
		{
			if (obj_name&&obj_name->empty())//no object name check fun name
			{
				if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
				//else ret = op->execute();
			}
		}
	}
	if (ret == -1 && fun_name&&fun_name->empty() == false) ret = this->execute((char*)"runcmd", (void *)fun_name->c_str(), new_thread); //auto run extern commant
	return ret;
}

int Object::execute(Object *o, char *obj_name , char * fun_name , void * p, bool new_thread)
{
	string s_obj, s_fun;
	if(obj_name) s_obj=obj_name;
	if(fun_name)s_fun=fun_name;	
	return this->execute(o, s_obj, s_fun,p,new_thread);
}

int Object::execute(void *p)
{
	return this->func(p);
}

int Object::execute(void *p1,void *p2)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;
}

int Object::execute(void *p1,void *p2,void *p3)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;	
}

int Object::execute(Object *o, void *p)//o->execute(void *p)
{
	if (!o) return -1;
	return o->execute(p);
}

//if new_thread==true  run function on new thread .
int Object::execute(MyFunc func, void * p, bool new_thread) //execute input func 
{
	//AT_LINE
	if (!func) return -1;
	if (new_thread == false) return func(p);

	std::thread(func, p).detach();

	return 0;
}

int Object::execute(string *fun_name, void * p, bool new_thread) //execute this->ex_func 
{
	return this->execute(fun_name->data(), p, new_thread);
}

int Object::execute(char* fun_name, void * p, bool new_thread)
{
	string s = fun_name;
#if OBJECT_TEST
	std::cout << "int Object::execute->"<<s << endl;//test ok
#endif
	return this->execute(s, p, new_thread);
}

int Object::execute(string fun_name, void * p, bool new_thread) //execute this->ex_func 
{
	int ret=-1;
	if (this->ex_func.empty()) return -1;
	LIST_CMYFUNC::iterator it;

	for (it = this->ex_func.begin(); it != this->ex_func.end(); ++it)
	{
		if (it->isMe(fun_name))
		{
			ret = it->runMe(p, new_thread);
		}
	}
	return ret;
}

int Object::allot(int size,void * *o_addr)
{
	if (size) {
		try {
			*o_addr = new char[size];//
		}
		catch (...)//fail
		{
			std::cout<< "error:Object::allot size=" << size << endl;
			return 0;
		}
	}

	return size;
}

int Object::allot(int old_size, void ** o_addr, int new_size, bool mem_cpy)
{
	void * n_addr=nullptr;
	if (old_size >= new_size) return old_size;
	new_size=this->allot(new_size,(void **)&n_addr);
	if (!n_addr||new_size<=old_size) return old_size;
	if(mem_cpy&&*o_addr) memcpy(n_addr, *o_addr, old_size);
	this->delete_allot(o_addr);//free  old o_addr memory
	*o_addr = n_addr;
	return new_size;
}

void Object::delete_allot(void **addr)
{
	if (addr&&*addr) {
		delete[](char*) (*addr);
		*addr = nullptr;
	}
}

void Object::s_toupper(string & str)
{
	std::string::size_type i,len= str.length();
	for ( i=0; i<len; ++i)
		str[i]=toupper(str[i]);
}

int Object::s_replace(string *base,string *tag,string *rep)
{
	if(base->empty()||tag->empty()||rep->empty()) return -1;//check empty

	std::string::size_type found=0;
	std::string::size_type tag_len=tag->length();
	std::string::size_type rep_len=rep->length();

	const char * t =tag->data();
	const char * r =rep->data();

	while(1)
	{
		found = base->find(t,found);
		if (found==std::string::npos) break;
		base->replace(found,tag_len,r);
		found+=rep_len;
	}

	return 0;
}

int Object::s_replace(string *base, char *tag, char *rep)
{
	string s_tag = tag, s_rep = rep;
	return this->s_replace(base, &s_tag, &s_rep);
}

int Object::s_replace(string *base)
{
	return this->s_replace(base, &this->s_tag, &this->s_rep);
}

int Object::toupper_replace(string *base,string *tag,string *rep)
{
	string us_tag=tag->data();
	string us_rep=rep->data();
	this->s_toupper(us_tag);
	this->s_toupper(us_rep);

	//std::cout<<"toupper_replace:"<<us_tag<<"="<<us_rep<<endl;//test ok
	this->s_replace(base,&us_tag,&us_rep);
	return 0;
}

int Object::replace_syntax(string *tag,string *rep)
{
	return this->s_replace(&this->syntax,tag,rep);
}

int Object::replace_temp(string *tag,string *rep)
{
	return this->s_replace(&this->temp,tag,rep);
}

int Object::replace_syntax(int upper_s)
{
	if(upper_s) this->toupper_replace(&this->syntax,&this->s_tag,&this->s_rep);
	return this->s_replace(&this->syntax,&this->s_tag,&this->s_rep);
}

int Object::replace_temp(int upper_s)
{
	if(upper_s) this->toupper_replace(&this->temp,&this->s_tag,&this->s_rep);
	return this->s_replace(&this->temp,&this->s_tag,&this->s_rep);
}

int Object::tag_temp(char *tag_value,int upper_s)
{
	if (!tag_value) return -1;
	this->my_init();
	this->s_rep=tag_value;
	this->replace_temp(upper_s);
	return 0;
}

int Object::add_tag_rule(CtagItem i)
{
	this->l_tag_rule.push_back(i);
	return 0;
}

int Object::add_tag_rule(string tag, string temp, string replace)
{
	CtagItem i(tag, temp, replace);
	this->l_tag_rule.push_back(i);
	return 0;
}

int Object::add_tag_rule(char* tag, char* temp, char* replace)
{
	CtagItem i(tag, temp, replace);
	this->l_tag_rule.push_back(i); //try catch ??
	return 0;
}

int Object::my_tag_rule()
{
	int count = 0;
	LIST_TAGITEM::iterator it;
	for (it = this->l_tag_rule.begin(); it != this->l_tag_rule.end(); ++it)
	{
		std::cout << this->name << ":" << ++count << ":" << it->tag << it->replace << endl;
	}
	std::cout << this->name << " my_tag_rule  count : " << count << endl;
	return count;
}

long Object::my_id()
{
	return this->id;
}

int Object::set_time(struct tm *t,int tm_mon,int tm_mday,int tm_year,int tm_hour,int tm_min,int tm_sec,int tm_wday,int tm_yday)//mon/day/year/hour/min/sec/week/yday
{
	if(tm_mon>12||tm_mon<1\
	|| tm_mday>31||tm_mday<1\
	|| tm_hour>23||tm_hour<0\
	|| tm_min>59||tm_min<0\
	|| tm_sec>60||tm_sec<0||tm_year<1900)   return -1;

	if(tm_mday) t->tm_year = tm_year - 1900;
	t->tm_mon = tm_mon - 1;
	t->tm_mday = tm_mday;
	t->tm_hour=tm_hour;
	t->tm_min=tm_min;
	t->tm_sec=tm_sec;

	if(tm_wday<8&&tm_wday>0)
	{
		if(tm_wday==7) t->tm_wday=0;
		else t->tm_wday=tm_wday;
	}

	if(tm_yday>=0&&tm_yday<366) t->tm_yday=tm_yday;
	
	mktime(t);  // call mktime: tm_wday will be set 
	return 0;
}

int Object::cmp_time(struct tm *t1,struct tm *t2) //t1>t2 return 1 , t1==t2 return 0 ,t1<t2 return -1 
{
	if(t1->tm_year>t2->tm_year) return 1;
	if(t1->tm_year<t2->tm_year) return -1;

	if(t1->tm_mon>t2->tm_mon) return 1;
	if(t1->tm_mon<t2->tm_mon) return -1;

	if(t1->tm_mday>t2->tm_mday) return 1;
	if(t1->tm_mday<t2->tm_mday) return -1;

	if(t1->tm_hour>t2->tm_hour) return 1;
	if(t1->tm_hour<t2->tm_hour) return -1;

	if(t1->tm_min>t2->tm_min) return 1;
	if(t1->tm_min<t2->tm_min) return -1;

	if(t1->tm_sec>t2->tm_sec) return 1;
	if(t1->tm_sec<t2->tm_sec) return -1;

	return 0;
}

void Object::delay_clock(clock_t count)
{
	clock_t t= clock();
	while((clock()-t)<count);
}

bool Object::is_action(ACTION_T a, ACTION_T t, EatcionRelation r)
{
	if (r == EatcionRelation::none) return false;	//0,
	if (r == EatcionRelation::equal) return (a == t);	//==
	if (r == EatcionRelation::large) return (a >t);	//>
	if (r == EatcionRelation::large_equal) return (a >= t);	//>=
	if (r == EatcionRelation::small_) return (a < t);	//< small
	if (r == EatcionRelation::small_equal) return (a <= t);	//<=
	if (r == EatcionRelation::and_)	 return (a && t);//&&
	if (r == EatcionRelation:: or_ ) return (a || t);//||
	if (r == EatcionRelation::not_) return (!a);//	!
	if (r == EatcionRelation::bit_and) return (a & t)?true:false;	//&
	if (r == EatcionRelation::bit_or)	 return (a | t)?true:false;//|
	if (r == EatcionRelation::bit_not) return (~a)?true:false;	//~
	if (r == EatcionRelation::bit_xor) return (a ^ t)?true:false;	//^
	if (r == EatcionRelation::not_and) return (~a & t)?true:false;	//~&
	if (r == EatcionRelation::not_or) return (~a | t)?true:false;	//~|
	return false; //other is none action 
}

int Object::deal_action(Action * a, int count, Object * o)
{
	for (int i = 0; i < count; i++)
	{
		if (a[i].t == 0) break;
		if (!this->is_action(this->action, a[i].t, a[i].r)) continue;
		if (a[i].action == nullptr) continue;
		if (o == nullptr) this->do_action(a[i].action);
		else o->do_action(a[i].action);
	}
	return 0;
}

int Object::do_action(void * a)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return 0;
}

int Object::action_help(Action * a, int count)
{
	printf("[action]:\n");
	for (int i = 0; i < count; i++)
	{
		if (a[i].t == 0) break;
		if (a[i].name) printf("%d %s ", (int)a[i].t, a[i].name);
		if (a[i].help) printf("%s ", a[i].help);
		else printf("\n");
	}
	return 0;
}

ACTION_T Object::get_action(Action * a, int count, char * name)
{
	for (int i = 0; i < count; i++)
	{
		if (a[i].t == 0) break;
		if (0 == strcmp(a[i].name, name)) return a[i].t;
	}
	return (ACTION_T)0;
}

Object * Object::get_class()//object address
{
	return this;	
}

Object * Object::where()
{
	return this;
}

Object * Object::who()
{
	this->myName();
	return this;
}

time_t * Object::when()
{
	return &this->start_time;
}

int Object::how()
{
	return this->status; //normal, success, OK ,Pass!  and so on
}

int Object::func(void *p)
{
	std::cout << this->name << "Object::func\n";
	return 0;
}

int Object::url(void *p)//execute object url if exist
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;//do nothing
}

int Object::style(void *p)//execute object style
{
	return -1;//do nothing
}

int Object::image(void *p)//execute object image if exist
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;//do nothing
}

int Object::audio(void *p)//execute object audio if exist
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;//do nothing
}

int Object::video(void *p)//execute object vedio if exist
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;//do nothing
}

int Object::get(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;
}
int Object::help(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;
}

int Object::ui(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::event(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::task(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::interrupt(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::callback(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::exception(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
int Object::message(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
		return -1;
}
//return{<0 do nothing -1:nofind -2 empty ;  =0 pass ; >0 error}
int Object::dispatch_runme(void * myname, void *p)
{
	int ret = 0;
	ret=this->runme(myname, p);
	if (ret != -1) return ret;//has find and execute function and return dispatch
	if (this->family.empty()) return -2;//check family list is empty

	Object *o;
	LIST_FAMILY::iterator it;
	for (it = this->family.begin(); it != this->family.end(); ++it)
	{
		o = (Object *)*it;
#if OBJECT_DEBUG
		AT_LINE this->myName();
#endif
		ret = o->dispatch_runme(myname, p);
		if (ret == -1) continue;//do-nothing or not find , find next object runme()
		return ret; //ret >=0  
	}
	return -1;
}

int Object::runme(void * myname, void *p) //p:parameter
{
	if (strcmp((char *)myname, (char *)"message") == 0) return this->message(p);
	if (strcmp((char *)myname, (char *)"exception") == 0) return this->exception(p);
	if (strcmp((char *)myname, (char *)"callback") == 0) return this->callback(p);
	if (strcmp((char *)myname, (char *)"interrupt") == 0) return this->interrupt(p);
	if (strcmp((char *)myname, (char *)"event") == 0) return this->event(p);
	if (strcmp((char *)myname, (char *)"task") == 0) return this->task(p);
	if (strcmp((char *)myname, (char *)"help") == 0) return this->help(p);
	if (strcmp((char *)myname, (char *)"ui") == 0) return this->ui(p);
	if (strcmp((char *)myname, (char *)"get") == 0) return this->get(p);
	if (strcmp((char *)myname, (char *)"video") == 0) return this->video(p);
	if (strcmp((char *)myname, (char *)"audio") == 0) return this->audio(p);
	if (strcmp((char *)myname, (char *)"image") == 0) return this->image(p);
	if (strcmp((char *)myname, (char *)"style") == 0) return this->style(p);
	if (strcmp((char *)myname, (char *)"url") == 0) return this->url(p);
	if (strcmp((char *)myname, (char *)"func") == 0) return this->func(p);
	if (strcmp((char *)myname, (char *)"do_action") == 0) return this->do_action(p);
	if (strcmp((char *)myname, (char *)"who") == 0) { this->who(); return 0; }
	if (strcmp((char *)myname, (char *)"question") == 0) return this->question(p);
	if (strcmp((char *)myname, (char *)"display") == 0) return this->display(p);
	if (strcmp((char *)myname, (char *)"execute") == 0)//support two excute function
	{
		if (p) return this->execute(p);
		else return this->execute();
	}

	if (strcmp((char *)myname, (char *)"system") == 0)
	{
		if(p) return system((char *)p);
		return -1;
	}
	return -1;
}

int Object::create(void *p)
{
	return -1;//do nothing
}
int Object::my_init(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return -1;
}

int Object::my_exit(void *p)
{
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return 0;
}

int Object::my_clear(void *p)
{	
#if OBJECT_DEBUG
	OUT_LINE
#endif
	return 0;
}

int Object::clear(void *p)
{
	return this->my_clear(p);
}

int Object::list_cmd(int argc, char *argv[])
{
	do {
		argc--;
		std::cout << "argv[" << argc << "]=" << argv[argc] << endl;//list all command line
	} while (argc>0);
	return 0;
}

int Object::dispatch_cmd(int argc, char *argv[])//argv[1] = class name
{
	int ret = 0;
	if (argc < 2) return ++ret;//return error 1
	if (argc > 2&&strcmp(argv[1], (char *)"runme") == 0) return 	this->dispatch_runme(argv[2], &this->cmd);//!!magical

	if (this->isMe(argv[1]))
	{
#if OBJECT_DEBUG
		AT_LINE this->myName();
#endif
		this->deal_cmd(argc - 1, &argv[1]);
		return 0;
	}

	if (this->family.empty()) return -1;

	Object *o;
	LIST_FAMILY::iterator it;
	for (it = this->family.begin(); it != this->family.end(); ++it)
	{
		o = (Object *)*it;
#if OBJECT_DEBUG
		AT_LINE this->myName();
#endif
		ret= o->dispatch_cmd(argc, argv);
		if (ret) continue;
		break;
	}

	return -1;
}

int Object::deal_cmd(int argc, char *argv[])
{
	this->cmd.argc = argc;
	this->cmd.argv = argv;
	do{
		argc--;
		AT_LINE std::cout<<"argv["<<argc<<"]="<<argv[argc]<<endl;//list all command line
	}while(argc>0);
	return -1;
}
int Object::display(void *p)
{
	if (p)
	{
		std::cout << p << endl;
		return 0;
	}

	std::cout<<this->name<<","<<this->alias<<","<<"id="<<this->id<<":"<<this->description<<endl;
	return 0;
}

int Object::question(void * p)
{
	return 0;
}

//str[0]={_,a-z,A-z},str[n>0]={0-9,a-z,A-Z,_}
bool Object::is_identifier(char *str,void ** o_addr)
{
	int n;
	if(!(str[0]=='_'||str[0]>='A'&&str[0]<='Z'||str[0]>='a'&&str[0]<='z')) return false;
	for(n=1;str[n]!='\0';n++)
	{
		if(!(str[n]=='_'||str[n]>='A'&&str[n]<='Z'||str[n]>='a'&&str[n]<='z'||str[n]>='0'&&str[n]<='9')) return false;
	}
	return true;
}

bool Object::is_path(char *str,void ** o_addr)
{
	if(strstr(str,"/")) return true;

#if WINDOWS_OS
	if(strstr(str,"\\")) return true;
#endif//WINDOWS_OS

	return false;
}

bool Object::is_definable(char *s)
{
	if(s==nullptr) return false;
	if(false==this->is_identifier(s)) //check s 
	{
		if(false==this->is_path(s))	return false;//check s is path
		s=strrchr(s,'/');
		if(!s) s=strrchr(s,'\\');
		if(!s) return false;
		s++ ; //skip '/' or '\'
 	}
 	return true;
}	

string Object::wc_s(wchar_t* wc)
{
	wstring ws(wc);
	string s(ws.begin(), ws.end());
	return s;
}

wstring Object::s_ws(string * sp)
{
	wstring ws = wstring(sp->begin(), sp->end());
	return ws;
}

string Object::ws_s(wstring* ws)
{
	string s(ws->begin(), ws->end());
	return s;
}

int Object::sys_cmd(char *cmd)
{
	return system((char *)cmd);
}

int Object::sys_cmd(string *cmd)
{
	return system(cmd->c_str());
}

int Object::sys_cmd()
{
	return this->sys_cmd((string *)&this->s_cmd);
}

int Object::get_cmd(int argc, char *argv[], char *cmd)
{
	while (argc > 0)
	{
		argc--;
		if (0 == strcmp(argv[argc], cmd)) return argc;
	}
	return -1;
}

#if OBJECT_TEST
int main()
{
	std::cout << "Object main !\n";
	return 0;
}
#endif
