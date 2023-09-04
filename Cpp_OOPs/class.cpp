#include<iostream>
using namespace std;

class Employee{
public:
	string Name;
	string Company;
	int Age;
	
	void IntroduceYourself(){
	cout<<"Name is : "<< Name<<endl;
	cout<<"Company is : "<<Company<<endl;
	cout<<"Age is : "<<Age<<endl;
}
};
// constructor is a method , rules 1. no return type like void 2. same name as class like Employee
int main(){
	
	Employee employee1;
	employee1.Name = "Sai Kiran Reddy";
	employee1.Company = "Google";
	employee1.Age = 22;
	employee1.IntroduceYourself();
	
	Employee employee2;
	employee2.Name = "Akhila Reddy";
	employee2.Company = "Microsoft";
	employee2.Age = 24;
	employee2.IntroduceYourself();
	
	

}
