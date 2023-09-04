#include<iostream>
using namespace std;

class Employee{
private: // default also in C++ it takes as private
	string Name;
	string Company;
	int Age;
public:
	void setName(string name){
		Name = name;	
	}
	string getName(){
		return Name;
	}
	
	void setCompany(string company){//setter
		Company = company;	
	}
	string getCompany(){//getter
		return Company;
	}
	
	void setAge(int age){
		if(age>=18)
		Age = age;	
	}
	int getAge(){
		return Age;
	}
	
	
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
int main(){
	
	Employee employee1 = Employee("Sai Kiran Reddy","Google",21);
	employee1.IntroduceYourself();
	
    Employee employee2 = Employee("Akhila Reddy","Microsoft",24);;
	employee2.IntroduceYourself();
	
	employee1.setAge(23);
	cout<<employee1.getName() << " is " <<employee1.getAge()<<" years old"<<endl;
	

}
