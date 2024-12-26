//2 : switch
function getLetter(s) {
    let letter;
   
    let firstChar = s[0];

    switch (true) {
        case 'aeiou'.includes(firstChar):
            letter = 'A';
            break;
        case 'bcdfg'.includes(firstChar):
            letter = 'B';
            break;
        case 'hjklm'.includes(firstChar):
            letter = 'C';
            break;
        case 'npqrstvwxyz'.includes(firstChar):
            letter = 'D';
            break;
    }
    return letter;
}
