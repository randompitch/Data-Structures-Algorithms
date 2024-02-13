# BINARY SEARCH

Binary Search is a searching algorithm that works on sorted arrays. It is better to use **binary search** instead of
**linear search** on arrays that are already sorted as you'll know where a particular element would be based on the fact that it is a sorted array.

Points to remember:
* Binary search is only applicable in a **sorted _search space_**. The sorted search space does not necessarily have to be a sorted array. It can be anything but the search space must be sorted.

* In binary search, we generally divide the search space into **two equal halves** and then try to locate which half contains the target. According to that, we shrink the search space size.

The time complexity of binary search is `O(log n)`
