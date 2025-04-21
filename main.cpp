#include "Teacher.h"





int main() {
	Student st1("saf",19,5,true);


	for (int i = 0; i < st1.countMark; i++)
	{
		cout << st1.getMark(i) << " ";
	}


	return 0;
}