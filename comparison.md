# Comparison of Merge Sort and Quick Sort

| Factor | Merge Sort | Quick Sort |
|---|---|---|
| Sorting method | Divide and conquer | Divide and conquer |
| Best-case time complexity | O(n log n) | O(n log n) |
| Average-case time complexity | O(n log n) | O(n log n) |
| Worst-case time complexity | O(n log n) | O(n²) |
| Space complexity | O(n) | O(log n) average |
| Stability | Stable | Not inherently stable |
| Duplicate values | Equal elements can retain their original order | Standard version may change the order of equal elements |
| Stability modification | Stable implementation using comparison of weights | Modified stable implementation preserves the original order |
| Comparisons for given execution | 16 | 16 |

## Stability Verification

The package order in the input is:

P1(20), P2(15), P3(20), P4(10), P5(15), P6(20), P7(25), P8(10)

After stable sorting:

P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25)

For equal weights, the original order is preserved:

- Weight 10: P4 → P8
- Weight 15: P2 → P5
- Weight 20: P1 → P3 → P6
