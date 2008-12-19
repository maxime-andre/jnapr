#include <iostream>
using namespace std;
#include "tag.h"
#include "file.h"



int main(int argc, char **argv)
{
	tag t1("test");
	file f1("test.txt");
	cout<<t1<<endl;
	cout<<f1<<endl;
}
