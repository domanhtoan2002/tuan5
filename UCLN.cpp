#include<iostream>
using namespace std ;

int gcd(int a, int b){
  
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b
}

int main (){
	int a,b ;
	cout << "nhap so " ;
	cin >> a >> b;
    cout << "uoc chung lon nhat la " << gcd(a,b) ;
	
	return 0 ;
}
