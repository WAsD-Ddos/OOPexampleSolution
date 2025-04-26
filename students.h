#include "maint.h"


class Student {
private:
	string name;
	int age;
	int countMark;
	int* marks;
    bool alive;
public:
	string getName() {return name;}
	void setName(string name) {this->name = name;}

	int getAge() {return age;}
	void setAge(int age) {
		if (age < 13 && age >18) {this->age = age;}
	}
	
	int getCountMarks() {return countMark;}


	int* getsMarks() {return marks;}
	
	bool isAlive() {return alive;}
	void setAlive(bool alive) { this->alive = alive; }
	

	

	

	//default constructer 
	Student() :Student("no name",13,10,true){
	}
	//constructer with argument
	Student(string nm)  :Student(nm,13,0,true) {
	}
	//canonical construction
	Student(string name,int age,int countMark,bool alive) {
		//cout << "construction with argument " << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		this->countMark = countMark;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++)
		{
			marks[i] = 4;


		}
	}
	//construction copy
	Student(const Student& st) : Student(st.name,st.age,st.countMark,st.alive) {
		//cout << "construction with argument " << endl;

	}

	//destructor
	~Student() {
		if (marks != nullptr) {
			delete[] marks;
		}
	}



	string toString() {
		string res = "The name pupil : " + name + "\n";
		res += "The age pupil: " + to_string(age) + "\n";

		res += "The Mark pupil:\n";
	    res+= getAllMarks() + "\n";

		res += "The alive pupil:";
		res += alive ? "yes" : "no";
		res += "\n";
		return res;
	}
	string getAllMarks() {
		if (countMark == 0) { return "()"; }
		string res = "";
		for (int i = 0; i < countMark; i++)
		{
			res += to_string(marks[i]) + " ";
		}
		return res;
	}
	int getMark(int index) {
		return index < 0 || index > countMark || !marks ? 0 : marks[index];
	}
	void setMark(int index, int mark) {
		if (index >= 0 && index < countMark && marks) {
			marks[index] = mark;
		}
	}


};

