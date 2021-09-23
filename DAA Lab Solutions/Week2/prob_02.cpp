#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){

                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]==a[k]){
                        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==0)
            cout<<"No Sequence Found"<<endl;
    }
}