class Solution {
    
    areAnagrams(s1, s2) {
        if (s1.length !== s2.length) return false;

        const sorted1 = s1.split('').sort().join('');
        const sorted2 = s2.split('').sort().join('');

        return sorted1 === sorted2;
    }
}