class Solution {
    // Function to count the occurrences of x in the array.
    countFreq(arr, target) {
        let count=0;
        for(let i=0; i<arr.length; i++){
            if(arr[i] == target){
                count++;
            }
        }
        
        return count;
        
    }
}