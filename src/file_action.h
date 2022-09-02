#ifndef FILE_ACTION_H
#define FILE_ACTION_H
#include "bits_def.h"
#include "action_type.h"

enum class FileAtcionClass
{
	none,
	create,
	remove,
	rename,
	read,
	write,
	rd_wr,//read and write
	exist,
	size,
	merge,
};

enum class FileAtcion {
	none,//for 0 action
	read,
	cut,
	copy,
	cp,
	create,
	add,
	remove,
	rm,
	_delete,
	del,
	rename,
	rn,
	move,
	mv,
	exist,
	ex,
	size,
	sz,
	merge,
	merge_op,//operator +
};

#endif