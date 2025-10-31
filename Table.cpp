#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a number"<<endl;
	int n;
	cin>>n;
	int m;
	for(int i=1;i<=10;i++){
        m= n*i; 
        cout<<n<<"*"<<i<<"="<<m<<endl;
    }   
    return 0; 
}
	