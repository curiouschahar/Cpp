#include <iostream>
using namespace std;
int main() {
    cout<<"Enter number"<<endl;
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<=n; i++){
        f=f*i;
    }
    cout<<"Factorial is: "<<f<<endl;
    return 0;
}