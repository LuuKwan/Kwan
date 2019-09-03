#include"Student_record.h"
#include<iostream>
int main() {
	string ID, name, courseName, courseNumber;
	double score, GPA;
	vector<student>studentRecord;

	studentRecord.push_back(addStudent());
	studentRecord.push_back(addStudent());

	

	studentRecord.at(0).display();
	studentRecord.at(1).display();
	system("pause");
	return 0;
}