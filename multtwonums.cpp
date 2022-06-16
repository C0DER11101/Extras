#include<iostream>
#define MAX 100


using namespace std;

int main(void)
{
        int a, b, index=-1, ar[MAX], carry=0, ldigit, r;
        
        
        cout<<"enter two numbers: ";
        cin>>a>>b;
        
        while(b!=0)
        {
                ldigit=b%10;
                
                r=ldigit*a+carry;
                
                index++;
                ar[index]=r%10;
                
                carry=r/10;
                
                b/=10;
        }
        
        while(carry!=0)
        {
                index++;
                ar[index]=carry%10;
                carry/=10;
        }
        
        
        cout<<"\n\n the product of the two numbers is: ";
        
        for(int i=index; i>=0; i--)
                cout<<ar[i];
        cout<<"\n";
        
        return 0;
}
