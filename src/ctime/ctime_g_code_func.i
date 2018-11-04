#ifndef CTIME_G_CODE_FUNC_I
#define CTIME_G_CODE_FUNC_I
void ctime_add_objects(Object *p)
{
	p->addMe(g_asctime.where());
	p->addMe(g_clock.where());
	p->addMe(g_ctime.where());
	p->addMe(g_difftime.where());
	p->addMe(g_gmtime.where());
	p->addMe(g_localtime.where());
	p->addMe(g_mktime.where());
	p->addMe(g_strftime.where());
	p->addMe(g_time.where());

}
#endif
