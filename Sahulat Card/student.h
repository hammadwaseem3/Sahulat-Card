#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
using namespace std;

class Student
{
	private:
	    string studentID;
	    
	public:
		Student();
		
		Student(string s);
		
		Student(Student &obj);
		
		void setStudent(string s);
		
		string getStudent();
};

#endif
