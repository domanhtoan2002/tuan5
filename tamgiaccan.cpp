#include <iostream>

using namespace std;
 
int main()
{
    int a ;
    cout << "Nhap so : ";
    cin >> a ;
    for(int i = 1; i <= a ; i++) {  // in khoang trang
        for(int j = i; j < a; j++) {
            cout << " ";
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
