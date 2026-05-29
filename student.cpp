#include "student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name, course;
	int rollNumber, age;
	
void addStudent(std::vector<Student>& students){
	Student newStudent;
	cout<<"\n---Add New Student---\n";
   cout<<"Enter name:\n";
	cin>>getline( newStudent.name);
	cout<<"Enter Roll Number\n";
	cin>>newStudent.rollNumber;
	cout<<"Enter age\n";
	cin>>newStudent.age;
	cout<<"Enter student course\n";
	cin>>getline( newStudent.course);
	
	students.push_back(newStudent);
	cout<<"student added successfully!\n";
}


void displayStudent(){
	string StudentList;
	string student;
for(const auto& student: student){
	cout<<" rollNumber:"<<"|Name:"<<"|course:"<<"|age:"<<endl;	
}
}

void searchStudent(){
	int rollNumber;
	string name, StudentList, course;
	cout<<"Enter rollNumber to search\n";
	cin>>rollNumber;
			cout<<"Found:"<< name<<"course:"<< course<<endl;
			return;
	cout <<"student not found\n";
}

void update(){
	int rollNumber;
	cout<<"Enter rollNumber to update\n";
	cin>>rollNumber;
	for(const auto& s : StudentList){
		if(Student rollNumber == rollNumber){
			cout<<"Enter new name:"<<student name<<"course:"<<student course<<endl;
			return;
}
}
}

void delete(){
	int rollNumber;
	cout<<"Enter rollNumber to delete\n";
	cin>>rollNumber;
	for( auto it = StudentList){
		if(it -> rollNumber == rollNumber){
			cout<<"Student deleted successfully\n";
			return;
}
}
}
