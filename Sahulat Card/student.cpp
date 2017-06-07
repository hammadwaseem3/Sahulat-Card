#include"student.h"

Student::Student():studentID('\0')
{	
}
		
Student::Student(string s):studentID(s)
{
}
		
void Student::setStudent(string s)
{
	studentID=s;
}

Student::Student(Student &obj)
{
	this->studentID = obj.studentID;
}

string Student::getStudent()
{
	return studentID;
}
