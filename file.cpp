#include <iostream>
#include <string>
#include "file.h"

using namespace std;

file::file(const string &path)
{
	this->path=path;
}

file::file(const file &cfile)
{
	this->path=cfile.path;
}

file::~file()
{

}

ostream  &operator<<( ostream &o, file f)
{
   o<<f.path;
   return o;
}

