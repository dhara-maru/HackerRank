class Solution {
    // Function to reverse words in a given string.
    reverseWords(s) {
       let words = s.trim().split(/\s+/);
       
       let rev = words.reverse();
       
       return rev.join(' ')
    }
}