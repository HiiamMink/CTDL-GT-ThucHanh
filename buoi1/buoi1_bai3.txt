#include <iostream>
#include <math.h>
using namespace std;

int tinhX(int);
int tinhY(int);

int tinhX(int n){
    if(n==0){
        return 1;
    }
    return tinhX(n-1) + tinhY(n-1);
}

int tinhY(int n){
    if(n==0){
        return 0;
    }
    return 3*tinhX(n-1) + 2*tinhY(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << "X("<<n<<") = "<<tinhX(n);
    cout <<"\n";
    cout << "Y("<<n<<") = "<<tinhY(n);
    return 0;
}