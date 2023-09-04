#include<iostream>
using namespace std;

class Employee{
public:
	string Name;
	string Company;
	int Age;
	
	void IntroduceYourself()
	{
	cout<<"Name is : "<< Name<<endl;
	cout<<"Company is : "<<Company<<endl;
	cout<<"Age is : "<<Age<<endl;
    }
    Employee(string name,string company,int age){
    	Name=name;
    	Company=company;
        Age=age;
    	
	}
    
};
// constructor is a method , rules 1. no return type like void 2. same name as class like Employee  3. Public

int main(){
	
	Employee employee1 = Employee("Sai Kiran Reddy","Google",21);
	employee1.IntroduceYourself();
	
    Employee employee2 = Employee("Akhila Reddy","Microsoft",24);;
	employee2.IntroduceYourself();
	
	

}
