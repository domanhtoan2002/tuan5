#include <iostream>
using namespace std;
int main()
{
    long number, du ,i=1,sum=0;
    cout <<"nhap so can chuyen doi :";
    cin >> number ;
    do
    {
        du = number % 2;
        sum = sum + (i*du);
        number = number / 2;
        i=i*10;
    }while( number > 0);
    cout<<"so sau khi chuyen doi :"<< sum << endl;
    return 0;
}
