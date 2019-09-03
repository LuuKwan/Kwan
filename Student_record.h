#ifndef STUDENT_RECORD
#define STUDENT_RECORD
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> coursName{ "Computer","Math" };
vector<string> CourseNumber{ "cs1","m1" };
class student {
private:
	string ID, name, courseName, courseNumber;
	double score, GPA;
public:
	// input each score the student has in particular course
	vector<double> setOfScore(unsigned size) {
		vector<double> temp(size);
		for (unsigned i{ 0 }; i < size; ++i) {
			cin >> temp.at(i);
		}
		return temp;
	}
	// Input student ID in the record
	string getId()
	{
		cout << "Enter Student ID: ";
		cin >> ID;
		return ID;
	}

	// Check if the input course name match the course name in the database
	string course(string Cname) {
		for (unsigned i{ 0 }; i < 2; ++i) {
			if(Cname == courseName.at(0))

		}
		
	}
	string courseNumber() {

	}

	void display() {
		cout << "Student ID:	" << ID << endl;
	}
};	

 



 student addStudent() {
	 student temp;
	 temp.getId();
	 return temp;
	
 }
#endif // !STUDENT_RECORD

