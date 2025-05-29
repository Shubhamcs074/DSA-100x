#include<iostream>
using namespace std;
void checker(int arr[], int target, int n);
int main() {
    int n ;
    cout << "Enter the number of elements in the array:";
    cin >> n;
    int nums[n];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;;
    cout << "Enter the Target Number: ";
    cin >> target;
    checker(nums, target, n);
    return 0;           
}
void checker(int arr[], int target, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "Indices are: [" << i << "," << j << "]"<< endl;
                return ;
            }
        }
    }
}