#ifndef CSTDLIB_G_CODE_FUNC_I
#define CSTDLIB_G_CODE_FUNC_I
void cstdlib_add_objects(Object *p)
{
	p->addMe(g_abort.where());
	p->addMe(g_atexit.where());
	p->addMe(g_atof.where());
	p->addMe(g_atoi.where());
	p->addMe(g_atol.where());
	p->addMe(g_atoll.where());
	p->addMe(g_at_quick_exit.where());
	p->addMe(g_bsearch.where());
	p->addMe(g_calloc.where());
	p->addMe(g_cstdlib.where());
	p->addMe(g_free.where());
	p->addMe(g_getenv.where());
	p->addMe(g_labs.where());
	p->addMe(g_ldiv.where());
	p->addMe(g_llabs.where());
	p->addMe(g_lldiv.where());
	p->addMe(g_malloc.where());
	p->addMe(g_mblen.where());
	p->addMe(g_mbstowcs.where());
	p->addMe(g_mbtowc.where());
	p->addMe(g_qsort.where());
	p->addMe(g_quick_exit.where());
	p->addMe(g_rand.where());
	p->addMe(g_realloc.where());
	p->addMe(g_srand.where());
	p->addMe(g_strtod.where());
	p->addMe(g_strtof.where());
	p->addMe(g_strtol.where());
	p->addMe(g_strtold.where());
	p->addMe(g_strtoll.where());
	p->addMe(g_strtoul.where());
	p->addMe(g_strtoull.where());
	p->addMe(g_system.where());
	p->addMe(g_wcstombs.where());
	p->addMe(g_wctomb.where());
	p->addMe(g__Exit.where());

}
#endif
