#include<bits/stdc++.h>
#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
	private:
		int pcode;
		float price;
		float dis;
		string pname;
		
		public:
			void menu();
			void administrator();
			void buyer();
			void add();
			void edit();
			void rem();
			void list();
			void receipt();
			
};

void shopping ::  menu()  // :: scope resolution operator
{
	m:
	int choice;
	string email;
	string password;
	
	cout<<"\t\t\t\t____________________________________\n";
	cout<<"\t\t\t\t                                    \n";
	cout<<"\t\t\t\t       Supermarket Main Menu        \n";
	cout<<"\t\t\t\t                                    \n";
	cout<<"\t\t\t\t____________________________________\n";
	cout<<"\t\t\t\t                                    \n";
	cout<<"\t\t\t\t| 1) Administartor     |\n";
	cout<<"\t\t\t\t|                      |\n";
	cout<<"\t\t\t\t| 2) Buyer             |\n";
	cout<<"\t\t\t\t|                      |\n";
	cout<<"\t\t\t\t| 3) Exit              |\n";
	cout<<"\t\t\t\t|                      |\n";
	cout<<"\n\t\t\t Please select! ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\t\t\t Please Login \n";
			cout<<"\t\t\t Enter Email   \n";
			cin>>email;
			cout<<"\t\t\t Password          \n";
			cin>>password;
			
			if(email=="saikiranreddyavangapuram.com" && password=="@saikiran31")
			{
				administrator();
			}
			else
			{
				cout<<"Invalid email/password";
			}
			break;


		case 2:
		{
			buyer();
			
		}
	
		case 3:
		{
			exit(0);
		}
	
		default :
			{
				cout<< "Please select from the given options";
				
			}
			
					
}
goto m;   // goto is the jump statement ,  m is the label we have put it in starting of the menu
}

void shopping :: administrator()
{
	m:
	int choice;
	cout<<"\n\n\n\t\t\t Addministrator menu";
	cout<<"\n\t\t\t\|_____1) Add the product______|";
	cout<<"\n\t\t\t\|                             |";
	cout<<"\n\t\t\t\|_____2) Modify the product___|";
	cout<<"\n\t\t\t\|                             |";
	cout<<"\n\t\t\t\|_____3) Delete the product___|";
	cout<<"\n\t\t\t\|                             |";
	cout<<"\n\t\t\t\|_____4) Back to main menu____|";
	
	cout<<"\n\n\t Please enter your choice ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			add();
			break;
		
		case 2:
			edit();
			break;
		
		case 3:
			rem();
			break;
		
		case 4:
			menu();
			break;
		
		default :
			cout << "Invalid choice !";
			
	}
	goto m;
}

void shopping :: buyer()
{
	m:
	int choice;
	cout<<"\t\t\t 1) Buyer \n";
	cout<<"                \n";	
	cout<<"                \n";
	cout<<"t\t\t  1) Buy product \n";
	cout<<"                \n";
	cout<<"\t\t\t 2) Go back     \n";
	cout<<"\t\t\t Enter your choice :";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			break;
		
		case 2:
			menu();
		
		default :
			
			cout<<"Invalid choice";
			
	}
	
	goto m;
		
}

void shopping :: add()
{	m:
	fstream data ; // file handling operations , data is the object
	int c;
	int token=0;
	float p;
	float d;
	string n;
	
	cout<<"n\n\t\t\t\ Add new product";
	cout<<"n\n\t Product code of the product";
	cin>>pcode;
	cout<<"\n\n\t Name of the product";
	cin>>pname;
	cout<<"\n\n\t Price of the product";
	cin>>price;
	cout<<"\n\n\t Discount on Product";
	cin>>dis;
	// add option used by the adminstrator so we have to store the product details in file to shows user that we have these products
	data.open("database.txt,ios::in");
	// ios in will open the file in reading mode
	// ios out will open the file in writing mode
	
	if(!data)
	{                            // ios:: app is append mode
		data.open("database.txt",ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		// eof is end of file function
		while(!data.eof())
		{
			if(c == pcode)
			{
				token++;
				
			}
			data>>c>>n>>p>>d;
		
		data.close();
	}
		
	
	
	if(token==1)
	 goto m;
	else{
	    data.open("database.txt",ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();	
			
	}
}
	cout<<"\n\n\t\t Record inserted !";		
}

void shopping :: edit()
{
	fstream data,data1; // these two are objects of fstream class
	int pkey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
	
	cout<<"\n\t\t\t Modify the record";
	cout<<"\n\n\t\t Product code : ";
	cin>>pkey;
	
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n\nFile doesn't exist! ";
	}
	else{
		
		data1.open("database1.txt",ios::app|ios::out); // edited file and renaming it
		
		data>>pcode>>pname>>price>>dis;
		while(!data.eof()) // checking each and every content of the file
		{
			if(pkey==pcode)
			{
				cout<<"\n\t\t Product new code : ";
				cin>>c;
				cout<<"n\t\t Name of the product : ";
				cin>>n;
				cout<<"\n\t\t Price : ";
				cin>>p;
				cout<<"\n\t\t Discount :";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n\n\t\t Record edited";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
				
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found sorry";
		}
		
	}
	
	
}
void shopping :: rem()
{
	
	fstream data,data1;
	int pkey;
	int token=0;
	cout<<"\n\n\t Delete product";
	cout<<"\n\n\t Product code : ";
	cin>>pkey;
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"File doesn't exist";
		
	}
	
	else{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n\n\t Product deleted succesfully";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<price<<" "<<dis<<"\n";
				
			}
	     	data>>pcode>>pname>>price>>dis;			
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found";
		}
	}
}

void shopping :: list()
{
	fstream data;
	data.open("database.txt",ios::in);
	cout<<"\n\n|___________________________________________________\n";
	cout<<"ProNo\t\tName\t\tPrice\n";
	cout<<"\n\n|___________________________________________________\n";	
	data>>pcode>>pname>>price>>dis;
	while(!data.eof())
	{
		cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
		
	}
	data.close();
}

void shopping :: receipt()
{
	fstream data;
	
	int arrc[100];  // arrc[] means array of codes
	int arrq[100];  // arrq[] means array of quantity
	char choice;
	int c=0;
	float amount=0;
	float dis=0;
	float total=0;
	
	cout<<"\n\n\t\t\t\t\  RECEIPT ";
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n\n Empty database";
	}
	
	else{
		data.close();
		
		list();
		cout<<"\n______________________________________________\n";
		cout<<"\n|                                             \n";
		cout<<"\n        Please place the order                \n";
		cout<<"\n|                                             \n";
		cout<<"\n______________________________________________\n";	
		do
		{
			m:
			cout<<"\n\nEnter Product code :";
			cin>>arrc[c];
			cout<<"\n\nEnter the product quantity :";
			cin>>arrq[c];
			for(int i=0;i<c;i++)
			{
				if(arrc[c]==arrc[i])
				{
					cout<<"\n\n Duplicate product code. Please try again!";
					goto m;
				}
			}
			c++;	// if product key is not duplicate counter will increase
			cout<<"\n\n Do you want to buy another product ? if yes then press y else no";
			cin>>choice;
		}
		while(choice == "y");
		
		cout<<"\n\n\t\t\t____________________________RECEIPT________________________________\n";
		cout<<"\nProduct No\t product Name\t product quantity\tprice\tAmount\tAmount with discount\n";
		
		for(inti=0;i<c;i++)
		{
			data.open("database.txt",ios::in);
			data>>pcode>>pname>>price>>dis;
			while(!data.eof())
			{
				if(pcode==arrc[i])
				{
					amount=price*arrq[i];
					dis=amount-(amount*dis/100);
					total = total + dis;
					cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t"<<amount<<"\t\t"<<dis;							
				}
				data>>pcode>>pname>>price>>dis;
			}
		}
		data.close();
		
		
	}
	cout<<"\n\n_____________________________________________________";
	cout<<"\n Total Amount : "<<total;
	
}
int main()
{
	shopping s;
	s.menu();	
}


