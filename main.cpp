#include "students.h"




//void show(Student st) {
//	cout << "The name pupil: " << st.name << endl;
//	cout << "The age pupil: " << st.age << endl;
//	cout << "The mark pupil: " << st.mark << endl;
//	cout << "The alive pupil: " << (st.alive?"yes" : "no") << endl;
//	cout << "_________________" << endl;
//}

void change(Student st) {
	st.name = "Bog";
	st.age = 19;
	st.mark = 3.5;
	st.alive = false;
}



int main() {

	Student st1,st2;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	st2.name = "Misha";
	st2.age = 15;
	st2.mark = 7.1;
	st2.alive = true;

	
	  //string name = st1.mark > st2.mark ? st1.name : st2.name;
	 //Student t= st1.mark > st2.mark ? st1: st2;
	cout<<st1.getString()<<endl;
	//cout<<st2.getString()<<endl;
	 //cout <<"The best pupil: " <<t.name << endl;
	cout << "___________________________" << endl;
	//change(st1);
	st1.name = "Bog";

	cout << st1.getString() << endl;





	return 0;
}