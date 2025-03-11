#include<iostream>
#include <string>
using namespace std;

class Student {
	int id;
	string name;
	int standard;
	float percentage;
	char bloodGroup;

public:
void input(int id,string name,int standard,float percentage,char bloodGroup){

	this->id = id;
	this->name = name;
	this->standard = standard;
	this->percentage = percentage;
	this->bloodGroup = bloodGroup;
}

 void output() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Standard: " << standard << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Blood Group: " << bloodGroup << endl << endl;
}
};

int main (){
	
	Student bhakti,hiranya,saksham;
	bhakti.input(1,"Bhakti",10,77.9,'A');
	bhakti.output();
	
	hiranya.input(2,"Hiranya",7,90.5,'B');
	hiranya.output();
	
	saksham.input(3,"Saksham",4,75.80,'AB');
	saksham.output();
	
	
	
	return 0;
}
