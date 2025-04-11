#include<iostream>
using namespace std;
int main(){
  int n;
    cout<<"Enter number: ";
    cin>> n;
    if (n==1 || n<1){
        cout<<"neither prime nor composite";
    }
        if (n>1){
            for(int i=2; i<=n/2; i++){
                if (n%i==0){
                    cout<<"composite";
                    break;
                }
            
                if(n%i!=0){
                    cout<<"prime number";
                }
        }
    }
}
