#include<iostream>
using namespace std;
main()
{
	string player1;
	string player2;

	cout<<"Player 1 enter the word: ";
	cin>>player1;
	cout<<"Player 2 enter the word: ";
	cin>> player2;

	if(player1=="rock" && player2=="paper")
	{cout<<"Player 2 wins";}
	else if(player1=="paper" && player2=="rock")
	{cout<<"Player 1 wins";}
	else if(player1=="scissors" && player2=="paper")
	{cout<<"Player 1 wins";}
	else if(player1=="paper" && player2=="scissors")
	{cout<<"Player 2 wins";}
	else if(player1=="scissors" && player2=="rock")
	{cout<<"Player 2 wins";}
	else if(player1=="rock" && player2=="scissors")
	{cout<<"Player 1 wins";}
	else if(player1==player2)
	{cout<<"it is draw...";   }




}