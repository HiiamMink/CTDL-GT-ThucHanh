#include <iostream>
using namespace std;

int tinhtong (int a[], int n, int i=0, int tong=0){
    if(i>=n){
        return tong;
    }
    if(a[i]%2==0){
        tong = tong +a[i];
    }
    return tinhtong (a,n,++i,tong);
}

void nhapmang (int a[], int n){
    for (int i =0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int main(){
    int n;
    cout << " nhap so phan tu trong mang n = ";
    cin >> n;
    int a[n];
    nhapmang(a,n);
    int i=0, tong=0;
    cout << "\ntong cac phan tu chan trong mang: "<< tinhtong(a,n,i,tong);
    return 0;
}
