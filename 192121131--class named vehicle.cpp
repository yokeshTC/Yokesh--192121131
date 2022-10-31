#include<iostream>
class Vehicle
{
	int regno;
	char ftype[20];
public:
	void getdata();
	cout<<"\nEnter Registration no, Fuel type ";
	cin>>regno>>ftype;
	void display()
	{
		cout<<"\nRegistration no : "<<regno<<", Fuel type : "<<ftype;
	}
};

class wheeler : public Vehicle
{
	float dist;
	float milage;
public:
	void getdata()
	{
		Vehicle :: getdata();
		cout<<"\nEnter Distance, Milage";
		cin>>dist>>milage;
	}
	void display()
	{
		Vehicle :: display();
		cout<<"\nDistance : "<<dist<<", Milage : "<<milage;
	}
};

int main()
{
	wheeler w;

	w.getdata();
	w.display();

	getch();
	return 0;
}