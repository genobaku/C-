# C++ Snippet Cheat Sheet

| Shortcut | What it gives | When to use |
|---|---|---|
| `cpp` | Full C++ `main()` boilerplate | Starting a new program |
| `fastio` | `ios::sync_with_stdio(false)` | Competitive programming / large input |
| `cin` | `cin >> variable` | Taking input |
| `cout` | `cout << variable` | Printing output |
| `fori` | Normal `for` loop | Traverse array/vector |
| `forr` | Reverse / range loop | Traverse backwards / each element |
| `while` | `while` loop | Repeat until condition changes |
| `vec` | `vector<T>` | Dynamic array |
| `veci` | Initialized `vector<int>` | Quickly create a vector with values |
| `pair` | `pair<T1,T2>` | Store two related values |
| `map` | `map<K,V>` | Key → value, sorted keys |
| `umap` | `unordered_map<K,V>` | Fast key → value lookup |
| `set` | `set<T>` | Unique sorted values |
| `uset` | `unordered_set<T>` | Unique values, fast lookup |
| `stack` | `stack<T>` | LIFO problems |
| `queue` | `queue<T>` | FIFO / BFS |
| `pq` | Max-heap | Get largest element quickly |
| `minpq` | Min-heap | Get smallest element quickly |
| `sort` | Ascending sort | Sort array/vector |
| `rsort` | Descending sort | Reverse sorting |
| `csort` | Custom sorting | Sort by your own rule |
| `bs` | `binary_search()` | Check if value exists in sorted data |
| `lb` | `lower_bound()` | First element >= x |
| `ub` | `upper_bound()` | First element > x |
| `bsearch` | Binary-search skeleton | Searching a sorted range / answer |
| `swap` | Swap two values | Exchange variables/elements |
| `maxmin` | `max()` + `min()` | Find larger/smaller value |
| `gcd` | `gcd(a,b)` | Number theory |
| `str` | `string` | Work with text |
| `getline` | Read full line | Input containing spaces |
| `func` | Function template | Create reusable function |
| `intfunc` | `int` function | Function returning integer |
| `dfs` | DFS template | Graph/tree traversal |
| `bfs` | BFS template | Graph/tree level traversal |
| `dbg` | `cerr` debug output | Debugging without normal output |
| `consts` | `INF`, `MOD`, etc. | Common DSA constants |

⭐ The ones you should memorize first

### Level 1 — Daily
`cpp`  `cin`  `cout`  `fori`  `vec`  `sort`

You will use these constantly.

### Level 2 — Core DSA
`pair`  `map`  `umap`  `set`  `stack`  `queue`  `pq`  `minpq`

These become important once you start data structures.

### Level 3 — Algorithms
`bs`  `lb`  `ub`  `bsearch`  `dfs`  `bfs`  `csort`

These become important when you reach searching, graphs and advanced DSA.

### Level 4 — Utility
`fastio`  `swap`  `maxmin`  `gcd`  `str`  `getline`  `dbg`  `consts`

Useful, but don't spend study time memorizing them.