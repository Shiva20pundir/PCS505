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
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                cout<<"Present "<<i+1<<endl;
                break;
                f=1;
            }
        }
        if(f==0){
            cout<<"Not Present "<<n<<endl;
        }
    }
}
