#include "students.h"






void change(Student st) {
	st.name = "Bog";
	st.age = 19;
	st.mark = 3.5;
	st.alive = false;
}



int main() {
	Student* st1 = nullptr;
	st1 = new Student;

	Student* st2 = st1;

	st1->name = "Sigma";
	st1->age = 7;
	st1->mark = 3.678;
	st1->alive = true;


	cout << st1->getString() << endl;

	st2->name = "down";
	cout << "_______________" << endl;


	cout << st1->getString() << endl;

	





	return 0;
}