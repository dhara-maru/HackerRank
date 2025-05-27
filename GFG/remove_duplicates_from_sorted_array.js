class Solution {
    // Function to remove duplicates from the given array.
    removeDuplicates(arr) {
       let count=0;
       for(let i=0; i<arr.length; i++){
           if(arr[count] != arr[i]){
               count++;
               arr[count] = arr[i];
           }
       }
        return count + 1;
    }
}