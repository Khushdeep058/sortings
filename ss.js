function selectionSort(arr) 
{
    var l = arr.length;
    for (var i = 0; i < l - 1; i++) 
    {
        var small = i;
        for (var j = i + 1; j < l; j++) 
        {
            if (arr[j] < arr[small]) 
            {
                small = j;
            }
        }
        var temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
    return arr;
}
var arr = [10, 7, 8, 9, 1, 5];
var sortedArr = selectionSort(arr);
console.log("sorted array: " + sortedArr.join(" "));