#include<iostream>
#include<math.h>

using namespace std;

int nhapmang(float a[], int n){
    for (int i =0;i<n;i++){
        cout << "a["<<i<<"] = ";
        cin>> a[i];
    }
}

int kt_soduong(float a[],int n,int dem=0, int i =0){
    if(i>=n)
        return dem;
    if(a[i]>0){
        dem++;
    }
    return kt_soduong(a,n,dem,++i);
}

int main(){
    int n;
    cout <<"so phan tu trong mang n = "; 
    cin >>n;
    float a[n];
    nhapmang(a,n);
    int i =0, dem=0;
    cout << "co "<<kt_soduong(a,n,dem,i)<<" so duong trong mang";
    return 0;
}