#include<iostream>
using namespace std;
int main(){
    cout << "Enter the Number:";
    int n;
    cin >> n;
    cout <<"Value of n is " << n<< "\n";
    for(char i = 'A'; i < 'A' + n; i++){
        for(char k = 'A' + n; k>= i; k--){
            cout <<" ";
        }
        for(char j = 'A'; j<=i; j++){
            cout << j;
        }
        for(char j = i; j>'A'; j--){
            cout << char(j-1);
        }
       cout<<"" << endl ;
    }
    return 0;
}