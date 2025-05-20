class Solution {
    // Function to check if a given string is a palindrome.
    isPalindrome(s) {
        let len = s.length;
        let flag=1;
        for(let i=0; i<len/2; i++){
            if(s[i] != s[len-i-1]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            return true;
        }else{
            return false;
        }
    }
}