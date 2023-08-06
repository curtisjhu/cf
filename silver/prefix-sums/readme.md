Prefix Sums:

Adding elements in an array quickly

Naively, for every query, we can iterate through all entries from index 
$a$ to index $b$ to add them up. O(N) for each time.

Prefix array:
$$ prefix[k] = \sum_{i=0}^k arr[i] $$

A new array containing the "prefix sum" or the sum up to that index.

Now a query between two indexes is a simple subtraction:
$$ \sum_L^R arr[i] = prefix[R] - prefix[L] $$

This is O(1) for each query.


Beware of index shifts?