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
	
	if(day=="Sunday" && month=="October" && total>=5000 || day=="Thursday" && month=="November" && total>=5000)
	{purchase=total-(total*0.1);
	cout<<"The discounted amount is: ";
	cout<<purchase;}






}