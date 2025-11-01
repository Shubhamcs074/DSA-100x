/* Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.  
Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 109
*/

// </>Code

class Solution {
    public String largestNumber(int[] nums) {
        int n = nums.length;
        String elements[] = new String[n];
        for(int i=0;i<n;i++){
            elements[i] = Integer.toString(nums[i]);
        }
        Arrays.sort(elements, new Comparator<String>(){
            public int compare(String a, String b){
                String first = a + b;
                String sec = b + a;
                return sec.compareTo(first);
            }
        });
        if(elements[0].equals("0")){
            return "0";
        }
        StringBuilder sb = new StringBuilder();
        for(String val : elements){
            sb.append(val);
        }
        return sb.toString();
        
    }
}