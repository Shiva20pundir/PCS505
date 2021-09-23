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
        int noc=0,f=0,j;
        for(int i=0;i<n;i*=2){
            j=i*2;
            if(j>=n)
                j=n-1;
            if(i==0){
                j+=2;
            }
            if(a[i]<k && a[j]>k){
                int l=i,h=j,m;
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
            noc++;
            if(i==0)
                i++;
        }     
    }
}