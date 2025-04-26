#include "maint.h"


class Student {
private:
	string name;
	int age;
	int countMark;
	int* marks;
	bool alive;
	string getAllMarks();

public:
	Student() :Student("no name", 13, 10, true) {}
	Student(string nm) :Student(nm, 13, 0, true) {}
	Student(string name, int age, int countMark, bool alive);
	Student(const Student& st) : Student(st.name, st.age, st.countMark, st.alive) {}
	~Student();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int getCountMarks();
	int* getsMarks();
	bool isAlive();
	void setAlive(bool alive);
	string toString();
	int getMark(int index);
	void setMark(int index, int mark);
	double getAvarageMark();

};


