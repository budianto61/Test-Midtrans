#include<bits/stdc++.h>

using namespace std;

main(){
    int A[100];
    int D[100];
    int n;
    int counter=1;
    int bus[100];

    cout<<"Masukkan jlh bus:";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"A: ";
        cin>>A[i];
        cout<<"D: ";
        cin>>D[i];
    }
    for(int j=0; j<n;j++){
        if(D[j]>=A[j+1]){
            counter++;
        }
    }
    cout<<"Max :"<<counter;

return 0;
}
