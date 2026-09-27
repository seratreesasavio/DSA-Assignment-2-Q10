# Final Conclusion

Both Merge Sort and Quick Sort successfully sort the given package weights.

For the given input, both algorithms produced the sorted order:

10 10 15 15 20 20 20 25

The stable versions preserve the original relative order of packages having equal weights.

The stable sorted order is:

P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25)

Thus, the original order of packages with the same weight is maintained.

Merge Sort has O(n log n) time complexity in the best, average and worst cases. Standard Quick Sort has O(n log n) average-case time complexity but O(n²) worst-case time complexity.

Therefore, for this problem where maintaining the original order of packages with equal weights is important, the stable implementations are used and their results are verified using the package IDs.
