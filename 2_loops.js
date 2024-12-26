// 2 : Loops

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    
    const vowels = ['a', 'e', 'i', 'o', 'u']
    
    for(const char of s ){
        if (vowels.includes(char)) {
            console.log(char);
        }
    }
    for(const char of s ){
        if (!vowels.includes(char)) {
            console.log(char);
        }
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}