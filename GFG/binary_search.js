class Solution {
    binarysearch(arr, k) {
        // Code Here
        let low=0;
        let high=arr.length-1;
        let result=-1;
        
        while(low <= high){
            let mid = Math.floor((low + high) / 2);
            if(arr[mid] == k){
               result = mid;
                high = mid - 1;
            }
            else if(arr[mid] < k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return result; 
    }
}