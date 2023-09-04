#include<iostream>
using namespace std;

class AbstractEmployee{
	virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private: 
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
	void AskForPromotion(){
		if(Age>30)
		   cout<<Name<<"Got Promoted!"<<endl;
		else
		   cout<<Name<<" Sorry No Promotion"<<endl;
		   
		
	}
    
};

int main(){
	
	Employee employee1 = Employee("Sai Kiran Reddy","Google",31);
	
    Employee employee2 = Employee("Akhila Reddy","Microsoft",24);;
	employee1.AskForPromotion();
    employee2.AskForPromotion();
}
