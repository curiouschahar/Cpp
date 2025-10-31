#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a Number"<<endl;
    int a;
    cin>>a;
    if(a<2){
        cout<<a<<" is not prime number"<<endl;
        return 0;
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                cout<<a<<" is not a prime number"<<endl;
                return 0;
            }
        }
        cout<<a<<" is a prime number"<<endl;
        return 0;
    }
}