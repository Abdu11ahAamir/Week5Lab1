#include<iostream>
using namespace std;
main()
{
	string day;
	int purchase;
	int total;
	string month;

	cout<<"Enter the day: ";
	cin>>day;
	cout<<"Enter the total amount: ";
	cin>>total;
	cout<<"Enter the month: ";
	cin>>month;
	
	if(day=="Sunday" && total>=5000 && month=="October" || month=="March")
	{purchase=total-(total*0.1);
	cout<<"The discounted amount is: ";
	cout<<purchase;}






}