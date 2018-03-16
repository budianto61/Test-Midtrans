#include<bits/stdc++.h>

using namespace std;

vector<string> kata;

void addKata(string input){
    kata.push_back(input);
}

int findKata(string input){
    int counter = 0;
    bool cek;
    for(int i=0; i<kata.size(); i++){
        string temp = kata[i];
        cek = true;
        for(int j=0; j<input.length(); j++){
            if(input[j]!=temp[j]){
                cek = false;
                break;
            }
        }
        if(cek){
            counter++;
        }
    }
    return counter;
}

int main(){
    int angka;
    string operation, input;
    cin>>angka;
    while(angka--){
        cin>>operation>>input;
        if(operation=="add"){
            addKata(input);
        }else{
            int counter = findKata(input);
            cout<<counter<<" # because there are "<<counter<<" names started with "<<input<<endl;
        }
    }
    return 0;
}
