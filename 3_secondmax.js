// 3 : Arrays ( get second largest)
/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    let max = nums[0];
    let second = nums[0];
    for(let i=0; i<nums.length; i++){
        if(nums[i] > max){
            max = nums[i];
             
        }
    }
    
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] > second && nums[i] < max) {
            second = nums[i];
        }
    }

    return second;
}