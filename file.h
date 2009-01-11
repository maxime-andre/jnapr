#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>

using namespace std;


class file {
private:
	string path;
public:
	file(const string&);
	file(const file&);
	~file();
	friend ostream &operator<<( ostream &, file);
};

ostream &operator<<( ostream &, file);

#endif
