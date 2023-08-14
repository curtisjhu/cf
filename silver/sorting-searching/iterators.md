## Iterators

Noninclusive

```
sort(arr, arr+N);
sort(v.begin(), v.end());
```
Notice that `arr+N` and `v.end()` is noninclusive. It hangs off the edge.

## Actually useful in CP
```
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
```

### Some uses in sets:
```
set<int>::iterator it = s.begin();
auto it = s.begin();
```
```
for (auto it = s.begin(); it != s.end(); it++) {
	cout << *it << "\n";
}
```
```
auto it = s.find(x);
if (it == s.end()) {
	// x is not found
}
```