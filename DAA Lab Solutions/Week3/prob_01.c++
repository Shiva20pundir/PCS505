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
        int temp,j;
        int sft=0,noc=0;
        for(int i=1;i<n;i++){
            temp=a[i];
            j=i-1;
            while(j>=0 && a[j]>temp){
                a[j+1]=a[j];
                j=j-1;
                sft++;
                noc++;
            }
            a[j+1]=temp;
            sft++;
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " " ;
        }
        cout<<endl;
        cout<<"Comparisons = "<<noc<<endl;
        cout<<"Swifts = "<<sft<<endl;
    }
}