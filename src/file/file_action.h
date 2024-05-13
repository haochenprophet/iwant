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
	replace,
	compare,
	insert,
	checksum,
	crc,
	md5,  
	find,
};

enum class FileAtcion {
	none,//for 0 action
	read,
	cat,
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
	replace,
	rp,
	compare,
	fc,
	insert,
	ins,
	checksum,
	chksum,
	crc,
	md5,
	find,
	fd,
};

#endif