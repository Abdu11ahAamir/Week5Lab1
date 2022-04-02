#include<iostream>
using namespace std;
main()
{
	string day;
	int purchase;
	int total;

	cout<<"Enter the day: ";
	cin>>day;
	cout<<"Enter the total amount: ";
	cin>>total;
	
	if(day=="Sunday" && total>=5000)
	{purchase=total-(total*0.1);
	cout<<"The discounted amount is: ";
	cout<<purchase;}

	else if(total>=5000)
	{purchase=total-(total*0.05);
	cout<<"The discounted amount is: ";
	cout<<purchase;}






}