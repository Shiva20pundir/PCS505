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
        int l=0,h=n-1,m,noc=0,f=0;
        while (l<=h)
        {
            m=(l+h)/2;
            if(a[m]==k){
                cout<<"Present "<<noc+1<<endl;
                f=1;
                break;
            }
            else if(a[m]<k){
                l=m+1;
            }
            else{
                h=m-1;
            }
            noc++;
        }
        if(f==0){
            cout<<"Not Present "<<noc<<endl;
        }        
    }
}
