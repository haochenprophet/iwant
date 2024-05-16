#ifndef URI_H
#define URI_H

#include "object/object.h"

//[scheme:] scheme-specific-part
/*
	The following are two example URIs and their component parts:
         foo://example.com:8042/over/there?name=ferret#nose
         \_/   \______________/\_________/ \_________/ \__/
          |           |            |            |        |
       scheme     authority       path        query   fragment
          |   _____________________|__
         / \ /                        \
         urn:example:animal:ferret:nose
*/


namespace n_uri {
	class Curi :public Object
	{
  public:
  	string s_uri;
  	string scheme;
  	string authority;
  	string path;
  	string query;
  	string fragment;
	public:
		Curi();
    int func(void *p=nullptr);
	};

}
using namespace n_uri;

#endif
