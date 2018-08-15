#include "move.h"
#include "move_class.h"

Cvelocity::Cvelocity()
{
	this->acceleration = nullptr;
	this->velocity = nullptr;
	this->velocity_unit = nullptr;
	this->angle = nullptr;
	this->angle_unit = nullptr;
	this->dir = nullptr;
	this->start_time = nullptr; 
	this->keep_time = nullptr; 
	this->end_time = nullptr;
	this->location = nullptr; 
	this->target_loaction = nullptr;
	this->distance = nullptr;
}

Omove::Omove()
{
	this->v = nullptr;
	this->status = (unsigned long long) MoveStatus::stationary +(unsigned long long) MoveStatus::unmovable;
}

int Cmove::my_init(void *p)
{
	this->name = "Cmove";
	this->alias = "move";
	return 0;
}

Cmove::Cmove()
{
	this->my_init();
}

#if MOVE_TEST

int movein(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";
	return 0;
}
#endif
