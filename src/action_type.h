#ifndef ACTION_TYPE_H
#define ACTION_TYPE_H

typedef  unsigned long long ACTION_T;

//action and action type relation
enum class EatcionRelation {
	none = 0,
	equal,//==
	large,//>
	large_equal,//>=
	small_,//< small
	small_equal,//<=
	and_,//&&
	or_ ,//||
	not_,//!
	bit_and,//&
	bit_or,//|
	bit_not,//~
	bit_xor,//^
	not_and,//~&
	not_or,//~|
};

typedef struct ActionInfoStruct
{
	int step;
	void * action;//this action point can : object ,script, callback func, sql , ...
	void * time;//point time
	void * location;//point location
	void * executor;// point executor
}ActionInfo;

typedef struct ActionStruct
{
	ACTION_T t;//action type
	EatcionRelation r;//action operate
	void * action;//action table ending in 0  , ie.[1,2,3,0] ,can point ActionInfo
}Action;

#endif // !ACTION_TYPE_H
