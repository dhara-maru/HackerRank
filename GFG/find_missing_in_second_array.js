class Solution {
    findMissing(a, b) {
        const setB = new Set(b);
        return a.filter(num => !setB.has(num));
    }
}