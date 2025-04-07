#include "Teacher.h"






void change(Student st) {
	st.name = "Bog";
	st.age = 19;
	st.mark = 3.5;
	st.alive = false;
}



int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of students" << endl;
	cin >> size;

	list = new Student[size];

	cout << "input data of students: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Student number: " << i+1 << endl;
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "mark: ";
		cin >> list[i].mark;

		cout << "is alive:(y/n) ";
		char answer;
		cin >> answer;
		list[i].alive = islower(answer) == 'y\n';
		

	}

	Teacher teacher;
   
	Student result = teacher.getAllBestStudents(list, size);
	
	string msg = result.alive ? "Best Student " + result.name : "No best";

	cout << msg << endl;



	return 0;
}