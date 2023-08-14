
## Sorting
sorting tuples, arrays, pairs are as expected
```
vector< pair<int, int> > v;
v.push_back({2, 4});
v.push_back({2, 2});
v.push_back({1, 2});
sort(v.begin(), v.end());

# [1, 2] -> [2, 2] -> [2, 4]
```
In c++, struct = class but with all members public.

## Custom comparators
Method 1 - overloading "<"
```
struct Edge {
	int a, b, w;
	bool operator<(const Edge &y) {
		return w < y.w;
	};
}
vector<Edge> v;
...
sort(begin(v), end(v));
```
or
```
struct Edge {
	int a, b, w;
}
bool operator<(const Edge &x, const Edge &y) {
	return x.w < y.w;
};
```
or
```
struct Edge {
	int a, b, w;
	// friend gives access to private and protected members
	friend bool operator<(const Edge &x, const Edge &y) {
		return x.w < y.w;
	};
}
```
Method 2 - Comparison Function
```
bool cmp(int a, int b) {
	return true;
}

sort(v.begin(), v.end(), cmp);
```
or in C++11 or higher
```
sort(v.begin(), v.end(), [](int x, int y){ return x < y; });
```

## Coordinate Compressing