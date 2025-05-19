class Solution {
    // Function to return the count of number of elements in the union of two arrays.
    findUnion(a, b) {
        // code here
       let union = new Set([...a, ...b]);
       return union.size;
    }
}