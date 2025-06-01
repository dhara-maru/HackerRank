function sort(str) {
    let arr = str.split(""); // convert to array
    let temp;

    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr.join(""); // convert back to string
}


let str1 = "geeks";
let str2 = "kseeg";

str1 = sort(str1);
str2 = sort(str2);

console.log(str1===str2)