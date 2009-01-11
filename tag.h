#ifndef TAG_H
#define TAG_H

class tag {
private:
	char *name;
public:
	tag(const char *);
	tag(const tag&);
	~tag();
	friend ostream &operator<<( ostream &, tag);
};

ostream &operator<<( ostream &, tag);

#endif
