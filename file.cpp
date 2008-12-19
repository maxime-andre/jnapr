#include <cstring>
#include "file.h"

file::file(const char *path)
{
	this->path=new char[strlen(path)+1];
	strcpy(this->path, path);
}

file::file(const file &cfile)
{
	this->path=new char[strlen(cfile.path)+1];
	strcpy(this->path, cfile.path);
}

file::~file()
{
	delete[] path;
}
