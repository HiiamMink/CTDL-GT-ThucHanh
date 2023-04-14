#include <iostream>
using namespace std;

void nhapmang(int a[], int n){
    for (int i =0; i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin >> a[i];
    }
}

int demduong(int a[],int n ,int  i=0,int dem=0){
    if(i>=n){
        return dem;
    }
    if (a[i]>0){
        dem++;
    }
    return demduong(a,n,++i,dem);
}

int tongchan(int a[],int n, int i=0, int tong=0){
    if(i>=n){
        return tong;
    }
    if (a[i]%2==0){
        tong+=a[i];
    }
    return tongchan(a,n,++i,tong);
}

void xuatmang(int a[],int n, int i=0){
    if(i>=n){
        return;
    }else{
        cout<<a[i]<<" ";
    }
    return xuatmang(a,n,++i);
}

int tongduong(int a[], int n , int i =0, int tong=0){
    if(i>=n){
        return tong;
    }
    if(a[i]>0){
        tong+=a[i];
    }
    return tongduong(a,n,++i,tong);
}

int tinhtong(int a[],int n, int i=0, int tong=0){
    if(i>=n){
        return tong;
    }else{
        tong+=a[i];
        
    }
    return tinhtong(a,n,++i,tong);
    
}

void ktam(int a[], int n, int i=0, int dem=0){
    if(i>=n){
        if(dem==n){
            cout<<"mang toan am";
            return;
        }else{
            cout<<"mang co so duong";
            return;
        }
    }
    if(a[i]<0){
        dem++;
    }
    return ktam(a,n,++i,dem);
}

int tinhs(int n){
    if(n==0){
        return 1;
    }
    return n * tinhs(n-1);
} 

int timmax(int a[], int n,int i,int max){
    if(i>=n){
        return max;
    }
    if(max<a[i]){
        max=a[i];   
    }
    return timmax(a,n,++i,max);
}

void sapxeptangdan(int a[],int n, int i=0){
    if(i>=n){
        return;
    }
    for(int j =i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        } 
    }
    sapxeptangdan(a,n,++i);
}

int main (){
    int n;
    cout << "nhap so phan tu trong mang: ";
    cin >>n;
    int a[n];
    nhapmang(a,n);
    //cout<<"tong ptu chan trong mang: " <<tongchan(a,n)<<endl;
    //cout<<"co "<<demduong(a,n)<<" phan tu duong trong mang";
    //cout<<"tong phan tu duong torng mang: "<<tongduong(a,n);
    //cout<<"tong cac phan tu trong mang: "<<tinhtong(a,n);
    //ktam(a,n);
    //cout<<"S("<<n<<")= "<<tinhs(n);
    //int max=a[0];
    //cout<<"phan tu lon nhat trong mang: "<<timmax(a,n,0,max);
    //sapxeptangdan(a,n);
    //xuatmang(a,n);
}