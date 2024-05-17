#include "deploy_audio.h"
int Cdeploy_audio::my_init(void *p)
{
	this->name = "Cdeploy_audio";
	this->alias = "deploy_audio";
	return 0;
}

Cdeploy_audio::Cdeploy_audio()
{
	this->my_init();
}

Cdeploy_audio::~Cdeploy_audio()
{

}

#ifndef DEPLOY_AUDIO_TEST
#define DEPLOY_AUDIO_TEST 0//1
#endif

#if DEPLOY_AUDIO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
