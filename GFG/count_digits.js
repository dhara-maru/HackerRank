class Solution {
    // Function to check whether the number evenly divides n.
    evenlyDivides(n) {
    let d;
    let count=0;
    let temp=n;
      while(temp>0){
          d = temp % 10;
          if(n % d==0 && d != 0){
              count++;
          }
          temp = Math.floor(temp / 10);
      }
      
      return count;
        
    }
}