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
