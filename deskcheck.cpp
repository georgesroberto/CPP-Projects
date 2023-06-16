#include <iostream>
using namespace std;
int main()
{
	int arr[4]={6,4,3,1};
	int j=0;
	int k=10;
	for(j=0;j<4;j++)
	{
		if (arr[j]<k)
		{
			k+=arr[j];
			cout<<"Take "<<k<<" as value of k"<<endl;
		}
		return 0;
	}
}
