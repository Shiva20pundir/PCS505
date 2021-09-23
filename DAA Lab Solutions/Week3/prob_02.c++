#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int nos=0,com=0;
        for(int i=0;i<n-1;i++){
            int m=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[m]){
                    m=j;
                }
                com++;
            }
            if(m!=i){
                int te=a[m];
                a[m]=a[i];
                a[i]=te;
            }
            nos++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons = "<<com<<endl;
        cout<<"Swaps = "<<nos<<endl;
    }
}