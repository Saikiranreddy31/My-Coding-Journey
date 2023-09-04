#include<iostream>
using namespace std;

class AbstractEmployee{
	virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private: 
//	string Name;
	string Company;
	int Age;
protected:
	string Name;
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
	void AskForPromotion(){
		if(Age>30)
		   cout<<Name<<"Got Promoted!"<<endl;
		else
		   cout<<Name<<" Sorry No Promotion"<<endl;
		   
		
	}
    
};

class Developer:public Employee{
public:
	string FavProgrammingLanguage;
	Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name,company,age)
	{
		
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug(){
		cout<< getName() <<" Fixed the bug using "<<  FavProgrammingLanguage <<endl;
		// name is used incase private name is moved to protected name
	}
	
};
class Teacher:public Employee{
public:
	string Subject;
	void PrepareLesson(){
		cout<< Name << " Preparing lesson " << Subject <<endl; 
	}
	Teacher(string name,string company,int age,string subject):Employee(name,company,age){
		Subject = subject;
	}
};
int main(){
    
    Developer d = Developer("Ram","Apple",28,"C++");
    d.FixBug();
    d.FixBug();
    // To access AskPromotion make Employee as public in inherited developer class
    d.AskForPromotion();
    Teacher t = Teacher("Sita","IBM",34,"Python");
    t.PrepareLesson();
    t.AskForPromotion();
    
}
