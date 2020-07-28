#include<iostream>
using namespace std;

int Prime(int num)
{
    int i,r;
    if (num==2)
    return 1;
    for (i=2; i<=num/2; i++)
    {
        r = num%i;
        if (r==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int check = 0, n;
    cout<< "Enter a positive integer: ";
    cin>>n;
    for(int i = 1; i <= n/2;i++)
    {
            if (Prime(i))
            {
                    if (Prime(n-i))
                    {
                        cout<<n <<" = "<< i <<" + " << n-i<< endl;
                        check = 1;
                    }
            }    
    }
    if (check == 0)
            cout<<n<<" cannot be expressed as the sum of two prime numbers!";
    return 0;
}
