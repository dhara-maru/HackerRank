function printSwastika(n) {
    if (n % 2 === 0) {
        console.log("Only odd numbers allowed!");
        return;
    }

    let mid = Math.floor(n / 2);

    for (let i = 0; i < n; i++) {
        let row = "";

        for (let j = 0; j < n; j++) {
            if (
                // Top arm
                (i === 0 && j >= mid) ||
                // Middle horizontal bar
                i === mid ||
                // Bottom arm
                (i === n - 1 && j <= mid) ||
                // Left arm
                (j === 0 && i <= mid) ||
                // Right arm
                (j === n - 1 && i >= mid) ||
                // Vertical connector top right
                (j === mid && i >= mid)
            ) {
                row += "* ";
            } else {
                row += "  ";
            }
        }

        console.log(row);
    }
}
