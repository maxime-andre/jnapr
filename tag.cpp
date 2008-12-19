#include <cstring>
#include "tag.h"

tag::tag(const char *name)
{
	this->name=new char[strlen(name)+1];
	strcpy(this->name, name);
}

tag::tag(const tag *ctag)
{
	this->name=new char[strlen(ctag.name)+1];
	strcpy(this->name, ctag.name);
}

tag::~tag()
{
	delete[] name;
}


