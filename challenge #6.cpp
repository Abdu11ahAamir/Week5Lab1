#include<iostream>
using namespace std;
int main()
{
    string ticket;
    int weight;
    int price;
    cout<<"Enter the Ticket type: ";
    cin>>ticket;
    if(ticket=="Business")
    {weight=40;
     price=15000;
     char condition;
     cout<<"Do you want to carry weight more than 40? (press Y for yes and N for no)";
     cin>>condition;
     if(condition=='Y')
     {int Aweight;
      int Aprice;
      cout<<"Enter the additional weight: ";
      cin>>Aweight;
      Aprice=1000*Aweight;
      price=price+Aprice;
      cout<<"The total price is :";
      cout<<price;
    }
}
        else if(ticket=="Economy")
    {weight=25;
     price=8000;
     char condition;
     cout<<"Do you want to carry weight more than 25? (press Y for yes and N for no)";
     cin>>condition;
     if(condition=='Y')
     {int Aweight;
      int Aprice;
    cout<<"Enter the additional weight: ";
      cin>>Aweight;
      Aprice=500*Aweight;
      price=price+Aprice;
      cout<<"The total price is :";
      cout<<price;
    }
}
}