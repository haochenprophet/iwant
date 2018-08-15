#ifndef MOVE_H 
#define MOVE_H
#include "data.h"
#include "bits_def.h"
namespace n_move {
	enum class MoveStatus //MoveStatus that can be combined with each other
	{
		none = 0,
		stationary=BIT0,	//Physical Reference object
		movable=BIT1,//of stationary
		unmovable= BIT2,
		motive= BIT3,
		high_speed = BIT4, //Relative speed of motive state
		low_speed= BIT5,//Relative speed of motive state
		normal_speed=BIT6,//Relative speed of motive state
	};

	enum class MoveDirection //MoveDirection that can be combined with each other
	{
		none=0,
	 	up= BIT0,
		down= BIT1,
		left= BIT2,
		right= BIT3,
		forward= BIT4,
		backward= BIT5,
		east= BIT6,
		west= BIT7,
		south= BIT8,
		north= BIT9,
		radian= BIT10,
	}; 
	 

	class Cvelocity
	{
	public:
		void * acceleration;
		void * velocity; //Udata 
		void * velocity_unit;
		void * angle,*angle_unit;
		void * dir;//point MoveDirection
		void * start_time,*keep_time,*end_time;
		void * location,*target_loaction;
		void * distance;//move distance
	public:
		Cvelocity();
		virtual int feedback(void * p = nullptr) { return -1; }//For correction,target_loaction,target_velocity,and acceleration*time
	};

	class Omove //Object 's move O:for class Object ,can be used to x-sensor
	{
	public:
		Udata status;
		Cvelocity * v;//Cvelocity [] ,nullptr end
		int v_count;//object_action = Cvelocity [v_count]
	public:
		Omove();
	};

}
using namespace n_move;

#endif
