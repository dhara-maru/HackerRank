// Day 8: Dictionaries and Maps
function processData(input) {
    const lines = input.split('\n');
   
    const n = parseInt(lines[0], 10);
    const phoneBook = new Map();

    for (let i = 1; i <= n; i++) {
        const [name, phoneNumber] = lines[i].split(' ');
        phoneBook.set(name, phoneNumber);
    }

    for (let i = n + 1; i < lines.length; i++) {
        const name = lines[i].trim();
        if (name) {
            if (phoneBook.has(name)) {
                console.log(`${name}=${phoneBook.get(name)}`);
            } else {
                console.log('Not found');
            }
        }
    }
}