#ifndef RELATION_H 
#define RELATION_H

namespace n_relation {
	enum class RelationType{
		none=0,
		time,//Time relationship ,Before ,After ,Now;Past, Present, future
		human,//Human relations
		logic, //&& || !
		mathematics,//Mathematical relationship
		code,//Class relationship
		positional,//Spatial positional relationship --up,down left ,right ,clock--x ,
	};
	
	enum class HumanRelation
	{
		independent,
		friendship,
		family,//family relation
		organize,//Organizational relationship
		community,//Community relations
		enemy,//Enemy relationship
		comrade,//Comrade relationship
		subordinate,//Subordinate relationship
		master_servant,//Master servant relationship
	};

	enum class MathRelation
	{
		intersect,//&
		merge,//+
		complement,//~ +1 
		//...
	};

	enum class CodeRelation
	{
		tree,	//tree relationship 		root,		node,	leaf,
		depend,//depend relationship
		caller,//main function ;Call ,Called
		member,//member relationship
		class_r,//class relationship, friend,
	};

	class Orelation //Object 's relation O:for class Object ,can be used to x-sensor
	{
	public:
		RelationType type;
		void * parameter;//can be used point  class Cparameter * store relation data.
	public:
		Orelation() { this->type = RelationType::none; this->parameter = nullptr; }
		//set
		int set(void* p, RelationType t=RelationType::none) { this->parameter = p; this->type = t; }

	};

}
using namespace n_relation;

#endif
