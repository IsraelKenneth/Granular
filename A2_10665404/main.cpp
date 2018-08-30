#include <iostream>

using namespace std;
// Properties of prime numbers
// * An integer that is 2 or greater
// * Does not produce a remainder when divided by a number between itself and the number 1
int main()
{
    int a,i;
    int c = 1;
    cout << "Enter a number:";
    cin >> a;
    for(i=2;i<a-1;i++)
    {
        if(a%i!=0)
        {
            continue;
        }
        else
        {
            c=0;
        }
    }
    if(c==0)
        {
        cout << "Number is not a prime";
        }
    else
    {
        cout << "Number is a prime";
    }

}

