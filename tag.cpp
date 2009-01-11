#include <iostream>
#include <string>

#include "tag.h"

using namespace std;

tag::tag(const string &name)
{
	this->name=name;
}

tag::tag(const tag &ctag)
{
	this->name=ctag.name;
}

tag::~tag()
{

}

ostream  &operator<<( ostream &o, tag t)
{
   o<<t.name;
   return o;
}


