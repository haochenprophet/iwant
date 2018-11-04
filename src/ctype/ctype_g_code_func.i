#ifndef CTYPE_G_CODE_FUNC_I
#define CTYPE_G_CODE_FUNC_I
void ctype_add_objects(Object *p)
{
	p->addMe(g_ctype.where());
	p->addMe(g_isalnum.where());
	p->addMe(g_isalpha.where());
	p->addMe(g_isblank.where());
	p->addMe(g_iscntrl.where());
	p->addMe(g_isdigit.where());
	p->addMe(g_isgraph.where());
	p->addMe(g_islower.where());
	p->addMe(g_isprint.where());
	p->addMe(g_ispunct.where());
	p->addMe(g_isspace.where());
	p->addMe(g_isupper.where());
	p->addMe(g_iswalnum.where());
	p->addMe(g_iswalpha.where());
	p->addMe(g_iswblank.where());
	p->addMe(g_iswcntrl.where());
	p->addMe(g_iswctype.where());
	p->addMe(g_iswdigit.where());
	p->addMe(g_iswgraph.where());
	p->addMe(g_iswlower.where());
	p->addMe(g_iswprint.where());
	p->addMe(g_iswpunct.where());
	p->addMe(g_iswspace.where());
	p->addMe(g_iswupper.where());
	p->addMe(g_iswxdigit.where());
	p->addMe(g_isxdigit.where());
	p->addMe(g_tolower.where());
	p->addMe(g_toupper.where());
	p->addMe(g_towctrans.where());
	p->addMe(g_towlower.where());
	p->addMe(g_towupper.where());
	p->addMe(g_wctrans.where());
	p->addMe(g_wctype.where());

}
#endif
