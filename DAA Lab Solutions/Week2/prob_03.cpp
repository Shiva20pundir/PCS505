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
        int k;
        cin>>k;
        int cnt=0;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(a[i]-a[j]==k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;

    }
}