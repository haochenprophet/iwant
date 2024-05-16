#include "radar_reconnoitre.h"
int Cradar_reconnoitre::my_init(void *p)
{
	this->name = "Cradar_reconnoitre";
	this->alias = "radar_reconnoitre";
	return 0;
}

Cradar_reconnoitre::Cradar_reconnoitre()
{
	this->my_init();
}

Cradar_reconnoitre::~Cradar_reconnoitre()
{

}

#ifndef RADAR_RECONNOITRE_TEST
#define RADAR_RECONNOITRE_TEST 0//1
#endif

#if RADAR_RECONNOITRE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
