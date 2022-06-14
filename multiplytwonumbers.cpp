#include<iostream>
#define MAX 100

using namespace std;

// MANUAL MULTIPLICATION!!!

int main(void)
{
	int a, b, carry=0, ldigit;

	cout<<"enter two numbers: ";
	cin>>a>>b;

	int arr[MAX], index=-1;

	while(b!=0)
	{
		ldigit=b%10;
		{
			int t=a;
			while(t!=0)
			{
				if(carry!=0)
				{
					arr[++index]=((ldigit*(t%10))+carry)%10;
					carry=((ldigit*(t%10))+carry)/10;
				}

				else
				{
					arr[++index]=(ldigit*(t%10))%10;
					carry=(ldigit*(t%10))/10;
				}

				t/=10;
			}

			if(carry!=0)
			{
				arr[++index]=carry;
			}

		}

		b/=10;
	}

	cout<<"\n\nthe result is:\n\n";

	for(int i=index; i>=0; i--)
		cout<<arr[i];

	return 0;
}
