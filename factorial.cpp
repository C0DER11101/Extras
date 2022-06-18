#include<iostream>
#define MAX 100

using namespace std;

int main(void)
{
	int a, b, ar[MAX], carry=0, result=0, index=-1, ldigit;


	cout<<"enter a number: ";
	cin>>a;

	if(a==0)
	{
		cout<<a<<"! = "<<1<<"\n\n\n";
		return 0;
	}


	cout<<a<<"! = ";

	while(a!=0)
	{

		if(index==-1)
		{
			b=a;
			while(b!=0) // this what we are doing in this section:  first we are multiplying a with 1 and then storing the result in the array
			{
				ldigit=b%10;
				result=ldigit*1+carry;
				carry=result/10;
				ar[++index]=result%10;
				b/=10;
			}

			while(carry!=0)
			{
				ar[++index]=carry%10;
				carry/=10;
			}
		}

		else
		{
			for(int i=0; i<=index; i++)
			{
				result=ar[i]*a+carry;
				ar[i]=result%10;
				carry=result/10;
			}

			while(carry!=0)
			{
				ar[++index]=carry%10;
				carry/=10;
			}
		}

		a--;
	}


	for(int i=index; i>=0; i--)
		cout<<ar[i];

	cout<<"\n\n\n";


	return 0;
}
