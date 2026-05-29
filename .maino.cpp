#include <iostream>
#include "student.h"
#include "Windows.h"
using namespace std;

int main(){
	string name, course;
	int rollNumber;
	int age;
	int choice;
	system("color 20");
	
	do{
	cout<<"\t\t==================================================="<<endl;
	cout<<"\t\t               STUDENT MANEGEMENT SYSTEM                                    \n";
	cout<<"\t\t====================================================="<<endl;
	cout<<"\t\t1. Add student \n";
	cout<<"\t\t2. Display All student \n";
	cout<<"\t\t3. Search  student by Roll Number \n";
	cout<<"\t\t4. Exit\n";
	cout<<"Enter your choice from 1 to 4:\n";
	cin>>choice;

switch (choice){
	case 1:
		cout<<"addStudent(studentList\n";
		break;
		
		case 2:
		cout<<"displayStudent(studentList\n";
		break;
		case 3:
		cout<<"searchStudent(studentList\n";
		break;
		case 4:
		cout<<"Exiting program\n";
		break;
		default:
			cout<<"Invalid choice! please try again\n";
		}
	}

	while(choice != 4);

	return 0;
}
		
	
