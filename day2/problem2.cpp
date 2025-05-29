#include <iostream>
using namespace std;
void clck_reverse(int arr[], int n);
void display_array(int arr[], int n);
int main() {
    int n ;
    cout << "Enter  the Size of the Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    display_array(arr, n);
    clck_reverse(arr, n);
    display_array(arr, n);
    cout << endl;
}
void clck_reverse(int arr[], int n){
    int temp = arr[n - 1];
    for(int i = n -1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    cout << "\nArray after clockwise rotation: ";
}
void display_array(int arr[], int n){
    cout << "[";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}