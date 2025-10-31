#include  <iostream>
using namespace std;
int main() {
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int r=0;
    while(n>0){
        int d=n%10;
        r=r*10+d;
        n=n/10;

    }
    cout<<"Reversed number is: "<<r<<endl;
    return 0;
}