function conquer(arr, si, ei, mid) {
    let merged = [];
    let idx1 = si;
    let idx2 = mid + 1;
    while (idx1 <= mid && idx2 <= ei) {
        if (arr[idx1] <= arr[idx2]) {
            merged.push(arr[idx1++]);
        } else {
            merged.push(arr[idx2++]);
        }
    }
    while (idx1 <= mid) {
        merged.push(arr[idx1++]);
    }
    while (idx2 <= ei) {
        merged.push(arr[idx2++]);
    }
    for (let i = 0, j = si; i < merged.length; i++, j++) {
        arr[j] = merged[i];
    }
}
function divide(arr, si, ei) {
    if (si >= ei) {
        return;
    }
    let mid = si + Math.floor((ei - si) / 2);
    divide(arr, si, mid);
    divide(arr, mid + 1, ei);
    conquer(arr, si, ei, mid);
}
let arr = [10, 7, 8, 9, 1, 5];
let n = arr.length;
divide(arr, 0, n - 1);
for (let i = 0; i < n; i++) {
    console.log(arr[i]);
}
