def conquer(arr, si, ei, mid):
    merged = []
    idx1 = si
    idx2 = mid + 1
    while idx1 <= mid and idx2 <= ei:
        if arr[idx1] <= arr[idx2]:
            merged.append(arr[idx1])
            idx1 += 1
        else:
            merged.append(arr[idx2])
            idx2 += 1
    while idx1 <= mid:
        merged.append(arr[idx1])
        idx1 += 1
    while idx2 <= ei:
        merged.append(arr[idx2])
        idx2 += 1
    for i, val in enumerate(merged):
        arr[si + i] = val
def divide(arr, si, ei):
    if si >= ei:
        return
    mid = si + (ei - si) // 2
    divide(arr, si, mid)
    divide(arr, mid + 1, ei)
    conquer(arr, si, ei, mid)
if __name__ == "__main__":
    arr = [10, 7, 8, 9, 1, 5]
    n = len(arr)
    divide(arr, 0, n - 1)
    for i in range(n):
        print(arr[i], end=" ")
    print()
