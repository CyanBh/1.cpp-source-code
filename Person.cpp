#include<iostream>
using namespace std;
 
class person{
	string name,address;
	int age;
	double basic,total,medical,hra,da,travel;
	public:
		void getInput();
		double totalsalary();
		void display();
};

void person::getInput(){
	cout<<"Enter the Name: "<<endl;
	cin>>name;
	cout<<"Enter the age: "<<endl;
	cin>>age;
	cout<<"Enter the address: "<<endl;
	cin>>address;
	cout<<"Enter the basic salary: "<<endl;
	cin>>basic;
}
double person::totalsalary(){
	medical=0.10*basic;
	hra=0.40*basic;
	da=0.30*basic;
	travel=0.05*basic;
	total=basic+medical+hra+da+travel;
	return total;
}
void person::display(){
	cout<<"The name: "<<name<<endl;
	cout<<"The Age: "<<age<<endl;
	cout<<"The basic salary: "<<basic<<endl;
	cout<<"the Total salary: "<<total<<endl;
}
int main(){
	string name;
	int age;
	string address;
	double basic,total,medical,hra,da,travel;
	int i,num;
	person p1[50];
	
	cout<<"Enter the number of people whose details needs to be stored: ";
	cin>>num;
	if(num>=50){
		cout<<"More then 50 inputs cannot be taken."<<endl;
	}
	else{
	for(i=0;i<num;i++){
	cout<<"Details of person: "<<i+1<<endl;
	p1[i].getInput();}
	
	for(i=0;i<num;i++){
	p1[i].totalsalary();}
	
	for(i=0;i<num;i++){
	cout<<"Details of person: "<<i+1<<endl;
	p1[i].display();}
	
	}
	return 0;
}