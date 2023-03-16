#include<iostream>
using namespace std;
int mpp(int a[], int n){
int product=0;
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
            if(i!=0){
                if(product<a[i]*a[j]){
                    product=a[i]*a[j];
                }
            }

}
}
return product;}

int main(){
   int n;
   cout<<"Size of array:"<<endl;
   cin>>n;
   int a[n];
    for(int i=0;i<n;++i){
    cin>>a[i];
   }
   cout<<mpp(a,n);



return 0;
}
