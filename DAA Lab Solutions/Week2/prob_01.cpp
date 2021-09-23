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
                f=1;
                noc++;
                break;
            }
            else if(a[m]<k){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        if(f==0){
            cout<<"Key Not Present "<<endl;
        }    
        else{
            int i=m+1,j=m-1;
            while(i<n && a[i]==k){
                noc++;
                i++;
            }
            while(j>=0 && a[j]==k){
                noc++;
                j--;
            }
            cout<<k<<" - "<<noc<<endl;
        }  

    }
}