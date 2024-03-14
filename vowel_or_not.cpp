#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the char alphabet: ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Alphabet";
    }else{
        cout<<"Consonant";
    }
    cout<<endl;
    return 0;
}