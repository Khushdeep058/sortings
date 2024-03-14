function bubbleSort(arr) {
    var l = arr.length;
    for (var i = 0; i < l - 1; i++) {
        for (var j = 0; j < l - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                var temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
var arr = [10, 7, 8, 9, 1, 5];
var sortedArr = bubbleSort(arr);
console.log("sorted array: " + sortedArr.join(" "));
