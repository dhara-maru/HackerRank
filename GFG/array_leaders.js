class Solution {
   leaders(a) {
        const n = a.length;
        const result = [];

        let maxFromRight = a[n - 1];
        result.push(maxFromRight); 

        for (let i = n - 2; i >= 0; i--) {
            if (a[i] >= maxFromRight) {
                maxFromRight = a[i];
                result.push(a[i]);
            }
        }

        result.reverse(); 
        return result;
    }
}