// 7 : Regex II

function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match a string that starts with 'Mr.', 'Mrs.', 'Ms.', 'Dr.', or 'Er.', 
     * followed by one or more letters.
     */
    let re = /^(Mr\.|Mrs\.|Ms\.|Dr\.|Er\.)\s?[a-zA-Z]+$/;
    
    /*
     * Do not remove the return statement
     */
    return re;
}