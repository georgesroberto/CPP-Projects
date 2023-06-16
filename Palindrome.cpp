#include <iostream>
using namespace std;
int main()
{
	int num,rev,rem,og;
	cout<<"Input number: ";
	cin>>og;
    num=og;
	rev=0;
	while (num>0)
	{
		rem=num%10;//I extract last digit
		rev=rev*10+rem;//store last dgtv@rev then option of adding other last digits
		num=num/10;//to remove the extracted digit
	}
	cout<<"Reverse of "<<og<<" is: "<<rev<<endl;
	
	if(og==rev)
	{
		cout<<og<<" Is a palindrome"<<endl;
	}
	else
	{
		cout<<og<<" Is not a palindrome"<<endl;
	}
	
	return 0;	
}
