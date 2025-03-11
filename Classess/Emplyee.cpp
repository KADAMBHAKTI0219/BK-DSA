#include<iostream>
#include <string>
using namespace std;

class Employee {
	int id;
	string name;
	string designation;
	float salary;

public:
void input(int id,string name,string designation,float salary){

	this->id = id;
	this->name = name;
	this->designation = designation;
	this->salary = salary;
}

 void output() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Salary: " << salary << endl << endl;
}
};

int main (){
	
	Employee bhakti,hiranya,saksham;
	bhakti.input(1,"Bhakti","Web Developer",20000);
	bhakti.output();
	
	hiranya.input(2,"Hiranya","IPS",50000);
	hiranya.output();
	
	saksham.input(3,"Saksham","Buisness Man",60000);
	saksham.output();
	
	
	
	return 0;
}
