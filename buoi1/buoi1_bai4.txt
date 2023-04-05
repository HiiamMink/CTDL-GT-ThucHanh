#include<iostream>
#include<math.h>

using namespace std;

int tinhX(int n){
    if(n==0)
        return 1;
    int tong = 0;
    for(int i=1; i <= n; i++){
        tong = tong + i * i * tinhX(n - i);
    }
    return tong;
}
int main(){
    int n;
    cout <<"Nhap n: "; 
    cin >>n;
    cout << "X("<<n<<") = "<<tinhX(n);
    return 0;
}