class file {
private:
	char *path;
public:
	file(const char *);
	file(const file&);
	~file();
	friend ostream &operator<<( ostream &, file);
};

ostream &operator<<( ostream &, file);
