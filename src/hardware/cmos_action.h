#ifndef CMOS_ACTION_H
#define CMOS_ACTION_H
#include "../object.h"

enum class CmosAtcionClass
{
	none,
	read,
	write,
	rw,//read and write
	dump,
	_and,
	_or,
};

enum class CmosAtcion {
	none,//for 0 action
//Read
	read,
	r,
	R,
//Dump
	dump,
	d,
	D,
//write
	write,
	w,
	W,
//read and write
	rw,
	RW,
//bit and 
	_and,
	a,
	A,
//bit OR 
	_or,
	o,
	O
};

#endif