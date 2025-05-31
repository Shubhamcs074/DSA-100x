#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size if array:";
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }
    int val;
    cout << "Enter the value to be searched: ";
    cin >> val;
    int flag = 0;
    for (int i = 0;i<n;i++){
        if(nums[i]== val){
            flag += 1;
        }
    }
    if(flag == 0){
        cout << "Value not found in the array." << endl;
    } else {
        cout << flag << endl;
    }

    return 0;
}