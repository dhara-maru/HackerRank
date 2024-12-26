// 1 : Let and const (area & perimeter of a circle)
function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
    const PI = Math.PI;
    let r = parseFloat(readLine());
      // Calculate the area of the circle
    const area = PI * r * r;
    console.log(area);

    // Calculate the perimeter of the circle
    const perimeter = 2 * PI * r;
    console.log(perimeter);
}