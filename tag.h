#ifndef TAG_H
#define TAG_H
#include <string>

using namespace std;

class tag {
private:
	string name;
public:
	tag(const string&);
	tag(const tag&);
	~tag();
	friend ostream &operator<<( ostream &, tag);
};

ostream &operator<<( ostream &, tag);

#endif
