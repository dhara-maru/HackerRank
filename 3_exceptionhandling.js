//3. try / catch / finally (reverse str)
/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try {
        let reversed = s.split('').reverse().join('');
        console.log(reversed);
    } catch (error) {
        console.log(error.message);
        console.log(s); 
    }
    
}