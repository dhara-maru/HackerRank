let a =  [100, 112, 256, 349, 770];
let b =  [72, 86, 113, 119, 265, 445, 892];
let k=7;
let newarr = [];

newarr.push(...a, ...b);

for(let i=0; i<newarr.length-1; i++){
    for(let j=0; j<newarr.length-i-1; j++){
        if(newarr[j] >= newarr[j+1]){
            let temp = newarr[j];
            newarr[j] = newarr[j+1];
            newarr[j+1] = temp;
        }
    }
}
console.log("New array is : ");
console.log(newarr);

//find the kth elem
for(let i=0; i<newarr.length; i++){
    if(i==k-1){
        console.log(newarr[i]);
    }
}