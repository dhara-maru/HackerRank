class Solution {
    nthFibonacci(n) {
        if (n === 0) return 0;
        if (n === 1) return 1;
        let a = 0, b = 1, next;
        for (let i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
}