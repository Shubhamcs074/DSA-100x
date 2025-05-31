#include<iostream>
using namespace std; 
void searchInsert(int nums[], int k, int target);       
int main (){
    int nums[4] = {1, 3, 5, 6};
    int k = 4;
    int target;
    cout << "Enter the target value:";
    cin >> target;
    searchInsert(nums, k, target);

}
void searchInsert(int nums[], int k, int target) {
  if (target > nums[k-1]) {
   cout << k;
  } else {
    for(int i = 0; i < k; i++){
        if(nums[i] >= target){
            cout << i;
            return;
        }
    }
  }
}