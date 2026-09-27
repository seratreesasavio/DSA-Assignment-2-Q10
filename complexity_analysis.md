# Complexity Analysis

## 1. Merge Sort

### Time Complexity
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)

### Space Complexity
- O(n), because an additional temporary array is used during merging.

---

## 2. Quick Sort

### Time Complexity
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)

### Space Complexity
- Average Case: O(log n) due to recursive function calls.
- Worst Case: O(n) due to recursion.

---

## 3. Stability

### Merge Sort
The Merge Sort implementation is stable because when two packages have the same weight, the package from the left subarray is selected first.

Therefore, packages with equal weights retain their original relative order.

### Quick Sort
The standard Quick Sort implementation is not inherently stable. The swapping operation can change the relative order of packages having equal weights.

The modified stable Quick Sort implementation preserves the original order of equal-weight packages by keeping elements with equal weights together in their original order.

---

## 4. Comparison Summary

| Factor | Merge Sort | Quick Sort |
|---|---|---|
| Best Time | O(n log n) | O(n log n) |
| Average Time | O(n log n) | O(n log n) |
| Worst Time | O(n log n) | O(n²) |
| Space | O(n) | O(log n) average |
| Stability | Stable | Not inherently stable |
| Duplicate values | Handles duplicates while preserving order | Handles duplicates, but standard version may change their order |
