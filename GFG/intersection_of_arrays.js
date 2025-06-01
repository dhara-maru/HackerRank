class Solution {
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    numberofElementsInIntersection(a, b) {
        let count=0;
        for(let i=0; i<a.length; i++){
            for(let j=0; j<b.length; j++){
                if(a[i] === b[j]){
                    count++;
                }
            }
        }
        return count;
    }
}