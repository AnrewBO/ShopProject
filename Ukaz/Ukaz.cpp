#include <iostream>
#include<stdlib.h>

using namespace std;


class Group
{
private:
	int kol_student;
	string id_group;
	Student* group = new Student[kol_student];
	string starost;
public:
	Group();
	//~Group();
};

class Student
{
private:
		string id_student;
		string name;
		string last_name;
		int  age;
		string institute;
		string department;
		string number_group;
		int test;
		int *score;
public:
	void Print();
	Student();
	~Student();
	friend istream& operator>>(istream& in,Student& student)
	{
		cout << "Name" << endl;
		cin >> student.name;
		cout << "Last Name" << endl;
		cin >> student.last_name;
		cout << "Age" << endl;
		cin >> student.age;
		cout << "ID of student" << endl;
		cin >> student.id_student;
		cout << "Institute" << endl;
		cin >> student.institute;
		cout << "Department" << endl;
		cin >> student.department;
		cout << "group" << endl;
		cin >> student.number_group;
		cout << "test" << endl;
		cin >> student.test;
		cout << "Score" << endl;
		for (int i = 0; i < student.test; i++)
		{
			cin >> student.score[i];
		}
	}

};


int main()
{
	Student student1;
	Group group1;

	cin >> student1;
	return 0;

}

void Student::Print()
{
	cout <<"Name: "<<name;
	cout << "Last Name: " << last_name;
	cout << "Group: " << number_group;
	cout << "Tests: " << test;
	cout << "Department" << department;
	cout << "Age: " << age;
	cout << "Institute: " << institute;
	cout << "Score :" << endl;
	for (int i = 0; i < test; i++)
	{
		cout << score[i];
	}
}
//Group::~Group()
//{
	//delete[] group;
//}
Student::Student()
{
	score = new int[test];
	cout << "Name"<<endl;
	cin >> name;
	cout << "Last Name" << endl;
	cin >> last_name;
	cout << "Age" << endl;
	cin >> age;
	cout << "ID of student" << endl;
	cin >> id_student;
	cout << "Institute" << endl;
	cin >> institute;
	cout << "Department" << endl;
	cin >> department;
	cout << "group" << endl;
	cin >> number_group;
	cout << "test" << endl;
	cin >> test;
	cout << "Score" << endl;
	for (int i = 0; i < test; i++)
	{
		cin >> score[i];
	}


}
Student::~Student()
{
	delete []score;
}
Group::Group()
{
	group = new Student[kol_student];
	cout << "kol" << endl;
	cin >> kol_student;
	cout << "ID of group" << endl;
	cin >> id_group;
	cout << "Starosta" << endl;
	cin >> starost;
	cout << "ID of students" << endl;
	//for (int i = 0; i < kol_student; i++)
	//{
		//cin >> group[i];
	//}
}