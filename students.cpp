#include "students.h"







	string Student::getAllMarks() {
		if (countMark == 0) { return "()"; }
		string res = "";
		for (int i = 0; i < countMark; i++)
		{
			res += to_string(marks[i]) + " ";
		}
		return res;
	}

	string Student::getName() { return name; }
	void Student::setName(string name) { this->name = name; }

	int Student::getAge() { return age; }
	void Student::setAge(int age) {
		if (age < 13 && age >18) { this->age = age; }
	}

	int Student::getCountMarks() { return countMark; }


	int* Student::getsMarks() { return marks; }

	bool Student::isAlive() { return alive; }
	void Student::setAlive(bool alive) { this->alive = alive; }


	//canonical construction
	Student::Student(string name, int age, int countMark, bool alive) {
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


	//destructor
	Student::~Student(){
		if (marks != nullptr) {
			delete[] marks;
		}
	}



	string Student::toString() {
		string res = "The name pupil : " + name + "\n";
		res += "The age pupil: " + to_string(age) + "\n";

		res += "The Mark pupil:\n";
		res += getAllMarks() + "\n";

		res += "The alive pupil:";
		res += alive ? "yes" : "no";
		res += "\n";
		return res;
	}

	int Student::getMark(int index) {
		return index < 0 || index > countMark || !marks ? 0 : marks[index];
	}
	void Student::setMark(int index, int mark) {
		if (index >= 0 && index < countMark && marks) {
			marks[index] = mark;
		}
	}


	double Student::getAvarageMark() {
		double sum = 0;
		for (int i = 0; i < countMark; i++)
		{
			sum += marks[i];
		}
		return sum / countMark;
	}







