//Program 8: Implement Hybrid Inheritance

#include <iostream>
using namespace std;

class Student{
	public:
		Student(){
			cout << "Student's Name is Rohan.\n";
		}
};

class Course: public Student{
	public:
		Course(){
			cout << "He has opted C++ Programming.\n";
		}
};

class Marks{
	public:
		Marks(){
			cout << "He has scored 92 marks out of 100.\n";
		}
};

class Result: public Course, public Marks{
	public:
		Result(){
			cout << "He has secured Second Position in class.\n";
		}
};

int main(){
	Result info;
	return 0;
}

