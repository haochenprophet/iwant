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
	and,//&&
	or ,//||
	not,//!
	bit_and,//&
	bit_or,//|
	bit_not,//~
	bit_xor,//^
	not_and,//~&
	not_or,//~|
};

typedef struct ActionStruct
{
	ACTION_T t;//action type
	EatcionRelation r;//action operate
	void * action_tab;//action table ending in 0  , ie.[1,2,3,0]
}ActionS;

#endif // !ACTION_TYPE_H
