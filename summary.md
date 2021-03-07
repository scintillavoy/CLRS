# Contents
- [Sorting](#sorting)
  - [Insertion Sort](#insertion-sort)
  - [Merge Sort](#merge-sort)
  - [Heapsort](#heapsort)
  - [Quicksort](#quicksort)
  - [Counting Sort](#counting-sort)
  - [Radix Sort](#radix-sort)
  - [Bucket Sort](#bucket-sort)
- [Data Structure](#data-structure)
  - [Stack](#stack)
  - [Queue](#queue)
  - [Linked List](#linked-list)
  - [Hash Table](#hash-table)
  - [Binary Search Tree](#binary-search-tree)
- [Graph Algorithm](#graph-algorithm)
  - [Breadth-First Search](#breadth-first-search)
  - [Depth-First Search](#depth-first-search)
  - [Topological Sort](#topological-sort)
  - [Strongly Connected Components](#strongly-connected-components)
  - [Minimum Spanning Tree](#minimum-spanning-tree)
  - [Single-Source Shortest Path](#single-source-shortest-path)
  - [All-Pairs Shortest Path](#all-pairs-shortest-path)
  - [Maximum Flow](#maximum-flow)
  - [](#)
- [Divide-and-Conquer](#divide-and-conquer)
  - [](#)
- [Dynamic Programming](#dynamic-programming)
  - [](#)
- [NP-Completeness](#np-completeness)
  - [](#)
- [](#)

# [Sorting](#contents)

## [Insertion Sort](#contents)
```C++
INSERTION-SORT(A)                           // p18, O(n^2)
    for j = 2 to A.length
        key = A[j]
        // Insert A[j] into the sorted sequence A[1..j-1].
        i = j-1
        while i > 0 and A[i] > key
            A[i+1] = A[i]
            i = i - 1
        A[i+1] = key
```

## [Merge Sort](#contents)
```C++
MERGE(A, p, q, r)                           // p31
    n1 = q - p + 1
    n2 = r - q
    let L[1..n1+1] and R[1..n2+1] be new arrays
    for i = 1 to n1
        L[i] = A[p+i-1]
    for j = 1 to n2
        R[j] = A[q+j]
    L[n1+1] = ∞
    R[n2+1] = ∞
    i = 1
    j = 1
    for k = p to r
        if L[i] <= R[j]
            A[k] = L[i]
            i = i + 1
        else A[j] = R[j]
            j = j + 1
```

```C++
MERGE-SORT(A, p, r)                         // p34, O(nlgn)
    if p < r
        q = floor((p+r)/2)
        MERGE-SORT(A, p, q)
        MERGE-SORT(A, q+1, r)
        MERGE(A, p, q, r)
```

## [Heapsort](#contents)
```C++
// The index starts from 1
PARENT(i)                                   // p152, O(1)
    return floor(i/2)

LEFT(i)
    return 2i

RIGHT(i)
    return 2i + 1
```

```C++
// The index starts from 0
#define PARENT(i)   ((i-1)/2)
#define LEFT(i)     (2*i + 1)
#define RIGHT(i)    (2*i + 2)
```

```C++
MAX-HEAPIFY(A, i)                           // p154, O(lgn) = O(h)
    l = LEFT(i)
    r = RIGHT(i)
    if l <= A.heap-size and A[l] > A[i]
        largest = l
    else largest = i
    if r <= A.heap-size and A[r] > A[largest]
        largest = r
    if largest != i
        exchange A[i] with A[largest]
        MAX-HEAPIFY(A, largest)
```

```C++
BUILD-MAX-HEAP(A)                           // p157, O(n)
    A.heap-size = A.length
    for i = floor(A.length/2) downto 1
        MAX-HEAPIFY(A, i)
```

```C++
// make_heap: O(n)
#include <algorithm>
template <class RandomIt>
constexpr void make_heap(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr void make_heap(RandomIt first, RandomIt last, Compare comp);
```

```C++
HEAPSORT(A)                                 // p160, O(nlgn)
    BUILD-MAX-HEAP(A)
    for i = A.length downto 2
        exchange A[1] with A[i]
        A.heap-size = A.heap-size - 1
        MAX-HEAPIFY(A, 1)
```

```C++
// sort_heap: O(nlgn)
#include <algorithm>
template <class RandomIt>
constexpr void sort_heap(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr void sort_heap(RandomIt first, RandomIt last, Compare comp);
```

```C++
HEAP-EXTRACT-MAX(A)                         // p163, O(lgn)
    if A.heap-size < 1
        error "heap underflow"
    max = A[1]
    A[1] = A[A.heap-size]
    A.heap-size = A.heapsize - 1
    MAX-HEAPIFY(A, 1)
    return max
```

```C++
// pop_heap: O(lgn)
// swaps the value at first and the value at last-1
// makes [first, last-1) into a heap
#include <algorithm>
template <class RandomIt>
constexpr void pop_heap(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr void pop_heap(RandomIt first, RandomIt last, Compare comp);
```

```C++
HEAP-INCREASE-KEY(A, i, key)                // p164, O(lgn)
    if key < A[i]
        error "new key is smaller than current key"
    A[i] = key
    while i > 1 and A[PARENT(i)] < A[i]
        exchange A[i] with A[PARENT(i)]
        i = PARENT(i)
```

```C++
MAX-HEAP-INSERT(A, key)                     // p164, O(lgn)
    A.heap-size = A.heap-size + 1
    A[A.heap-size] = -∞
    HEAP-INCREASE-KEY(A, A.heap-size, key)
```

```C++
// push_heap: O(lgn)
// inserts the element at last-1 into [first, last-1)
#include <algorithm>
template <class RandomIt>
constexpr void push_heap(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr void push_heap(RandomIt first, RandomIt last, Compare comp);
```

```C++
// Other functions
#include <algorithm>
// is_heap: O(n)
template <class RandomIt>
constexpr bool is_heap(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr bool is_heap(RandomIt first, RandomIt last, Compare comp);
// is_heap_until: O(n)
template <class RandomIt>
constexpr RandomIt is_heap_until(RandomIt first, RandomIt last);
template <class RandomIt, class Compare>
constexpr RandomIt is_heap_until(RandomIt first, RandomIt last, Compare comp);
```

## [Quicksort](#contents)
```C++
QUICKSORT(A, p, r)                          // p171, O(n^2)
    if p < r
        q = PARTITION(A, p, r)
        QUICKSORT(A, p, q-1)
        QUICKSORT(A, q+1, r)
```

```C++
PARTITION(A, p, r)                          // p171, O(n)
    x = A[r]
    i = p - 1
    for j = p to r - 1
        if A[j] <= x
            i = i + 1
            exchange A[i] with A[j]
    exchange A[i+1] with A[r]
    return i + 1
```

## [Counting Sort](#contents)
```C++
COUNTING-SORT(A, B, k)                      // p195, O(k + n)
// A[i] should be an integer in the range [0, k]
    let C[0..k] be a new array
    for i = 0 to k
        C[i] = 0
    for j = 1 to A.length
        C[A[j]] = C[A[j]] + 1
    // C[i] now contains the number of elements equal to i
    for i = 1 to k
        C[i] = C[i] + C[i - 1]
    // C[i] now contains the number of elements less than or equal to i
    for j = A.length downto 1
        B[C[A[j]]] = A[j]
        C[A[j]] = C[A[j]] - 1
```

## [Radix Sort](#contents)
```C++
RADIX-SORT(A, d)                            // p198
// O(d(n+k)) with n d-digit numbers, k possible values for each digit
// O((b/r)(n+2^r)) with n b-bit numbers, any positive integer r <= b
    for i = 1 to d
        use a stable sort to sort array A on digit i
```

## [Bucket Sort](#contents)
```C++
BUCKET-SORT(A)                              // p201, O(n) on average
// A[i] should be in the range [0, 1)
    n = A.length
    let B[0..n-1] be a new array
    for i = 0 to n-1
        make B[i] an empty list
    for i = 1 to n
        insert A[i] into list B[floor(nA[i])]
    for i = 0 to n-1
        sort list B[i] with sort
    concatenate the lists B[0], B[1], ..., B[n-1] together in order

```

# [Data Structure](#contents)

## [Stack](#contents)
```C++
#include <stack>
stack<T> st;
stk.empty() == true;            // O(1)
stk.push(v1);                   // O(1) for deque
stk.push(v2);
stk.size() == 2;                // O(1)
stk.top() == v2;                // O(1)
stk.pop();                      // O(1) for deque
stk.top() == v1;
```

## [Queue](#contents)
```C++
#include <queue>
queue<T> q;
q.empty() == true;              // O(1)
q.push(v1);                     // O(1) for deque
q.push(v2);
q.size() == 2;                  // O(1)
q.front() == v1;                // O(1)
q.back() == v2;                 // O(1)
q.pop();                        // O(1) for deque
q.front() == v2;
```

```C++
#include <queue>
priority_queue<int> pq;
pq.empty() == true;             // O(1)
pq.push(3);                     // O(lgn)
pq.push(5);
pq.size() == 2;                 // O(1)
pq.top() == 5;                  // O(1)
pq.pop();                       // O(lgn)
pq.top() == 3;
```

## [Linked List](#contents)
```C++
#include <forward_list>
forward_list<T> fl;             // singly-linked list
fl.front();                     // O(1)
fl.before_begin();              // O(1)
fl.begin();                     // O(1)
fl.end();                       // O(1)
fl.empty() == true;             // O(1)
fl.insert_after(it, v);         // O(1)
fl.erase_after(it);             // O(1)
fl.push_front(v);               // O(1)
fl.pop_front();                 // O(1)
```

```C++
#include <list>
list<T> l;                      // doubly-linked list
```

## [Hash Table](#contents)
```C++
#include <unordered_set>
unordered_set<K> us;
us.begin();                     // O(1)
us.end();                       // O(1)
us.insert(v);                   // average: O(1), worst: O(n)
us.erase(it);                   // average: O(1), worst: O(n)
us.count(v);                    // average: O(1), worst: O(n)
unordered_multiset<K> ums;
```

```C++
#include <unordered_map>
unordered_map<K, T> um;
um.begin();                     // O(1)
um.end();                       // O(1)
um.insert(v);                   // average: O(1), worst: O(n)
um.erase(it);                   // average: O(1), worst: O(n)
um.count(v);                    // average: O(1), worst: O(n)
unordered_multimap<K, T> umm;
```

## [Binary Search Tree](#contents)
```C++
#include <set>
set<K> s;                       // usually implemented as red-black trees
s.begin();                      // O(1)
s.end();                        // O(1)
s.insert(v);                    // O(lgn)
s.erase(it);                    // amortized: O(1)
s.count(v);                     // O(lgn)
multiset<K> ms;
```

```C++
#include <map>
map<K, T> m;                    // usually implemented as red-black trees
m.begin();                      // O(1)
m.end();                        // O(1)
m.insert(v);                    // O(lgn)
m.erase(it);                    // amortized: O(1)
m.count(v);                     // O(lgn)
multimap<K, T> mm;
```

# [Graph Algorithm](#contents)

## [Breadth-First Search](#contents)
```C++
BFS(G, s)                                   // p595, O(V + E)
    for each vertex u ∈ G.V - {s}
        u.color = WHITE
        u.d = ∞
        u.π = NIL
    s.color = GRAY
    s.d = 0
    s.π = NIL
    Q = EMPTY
    ENQUEUE(Q, s)
    while Q != EMPTY
        u = DEQUEUE(Q)
        for each v ∈ G.Adj[u]
            if v.color == WHITE
                v.color = GRAY
                v.d = u.d + 1
                v.π = u
                ENQUEUE(Q, v)
        u.color = BLACK
```

```C++
PRINT-PATH(G, s, v)                         // p601
    if v == s
        print s
    elseif v.π == NIL
        print "no path from" s "to" v "exists"
    else PRINT-PATH(G, s, v, π)
        print v
```

## [Depth-First Search](#contents)
```C++
DFS(G)                                      // p604, O(V + E)
    for each vertex u ∈ G.V
        u.color = WHITE
        u.π = NIL
    time = 0
    for each vertex u ∈ G.V
        if u.color == WHITE
            DFS-VISIT(G, u)
```

```C++
DFS-VISIT(G, u)                             // p604
    time = time + 1             // white vertex u has just been discovered
    u.d = time
    u.color = GRAY
    for each v ∈ G.Adj[u]       // explore edge (u, v)
        if v.color == WHITE
            v.π = u
            DFS-VISIT(G, v)
    u.color = BLACK             // blacken u; it is finished
    time = time + 1
    u.f = time
```

## [Topological Sort](#contents)
```C++
TOPOLOGICAL-SORT(G)                         // p613, O(V + E)
    call DFS(G) to compute finishing times v.f for each vertex v
    as each vertex is finished, insert it onto the front of a linked list
    return the linked list of vertices
```

## [Strongly Connected Components](#contents)
```C++
STRONGLY-CONNECTED-COMPONENTS(G)            // p617, O(V + E)
    call DFS(G) to compute finishing times u.f for each vertex u
    compute G(T)
    call DFS(G(T)), but in the main loop of DFS, consider the vertices in order of decreasing u.f (as computed in line 1)
    output the vertices of each tree in the depth-first forest formed in line 3 as a separate strongly connected component
```

## [Minimum Spanning Tree](#contents)
```C++
MST-KRUSKAL(G, w)                           // p631, O(ElgV)
// depending on how to implement the disjoint-set data structure
    A = EMPTY
    for each vertex v ∈ G.V
        MAKE-SET(v)
    sort the edges of G.E into nondecreasing order by weight w
    for each edge (u, v) ∈ G.E, taken in nondecreasing order by weight
        if FIND-SET(u) != FIND-SET(v)
            A = A ∪ {(u, v)}
            UNION(u, v)
    return A
```

```C++
MST-PRIM(G, w, r)                           // p634
// O(ElgV) with binary min-heap
// O(E + VlgV) with Fibonacci heap
    for each u ∈ G.V
        u.key = ∞
        u.π = NIL
    r.key = 0
    Q = G.V
    while Q != EMPTY
        u = EXTRACT-MIN(Q)
        for each v ∈ G.Adj[u]
            if v ∈ Q and w(u, v) < v.key
                v.π = u
                v.key = w(u, v)
```

## [Single-Source Shortest Path](#contents)
```C++
INITIALIZE-SINGLE-SOURCE(G, s)              // p648, O(V)
    for each vertex v ∈ G.V
        v.d = ∞
        v.π = NIL
    s.d = 0
```

```C++
RELAX(u, v, w)                              // p649, O(1)
    if v.d > u.d + w(u, v)
        v.d = u.d + w(u, v)
        v.π = u
```

```C++
BELLMAN-FORD(G, w, s)                       // p651, O(VE)
// Negative-weight cycles are detected
// Negative-weight edges are ok
    INITIALIZE-SINGLE-SOURCE(G, s)
    for i = 1 to |G.V|-1
        for each edge (u, v) ∈ G.E
            RELAX(u, v, w)
    for each edge (u, v) ∈ G.E              // check negative-weight cycle
        if v.d > u.d + w(u, v)
            return FALSE
    return TRUE
```

```C++
DAG-SHORTEST-PATHS(G, w, s)                 // p655, O(V + E)
// No negative-weight cycles
// Negative-weight edges are ok
// G should be a directed acyclic graph
    topologically sort the vertices of G
    INITIALIZE-SINGLE-SOURCE(G, s)
    for each vertex u, taken in topologically sorted order
        for each vertex ∈ G.Adj[u]
            RELAX(u, v, w)
```

```C++
DIJKSTRA(G, w, s)                           // p658
// No negative-weight cycles
// No negative-weight edges
// O((V+E)lgV), O(ElgV) with binary mean-heap
// O(VlgV + E) with Fibonacci heap
    INITIALIZE-SINGLE-SOURCE(G, s)
    S = EMPTY
    Q = G.V
    while Q != EMPTY
        u = EXTRACT-MIN(Q)
        S = S ∪ {u}
        for each vertex v ∈ G.Adj[u]
            RELAX(u, v, w)
```

## [All-Pairs Shortest Path](#contents)
```C++
PRINT-ALL-PAIRS-SHORTEST-PATH(Π, i, j)      // p685
    if i == j
        print i
    else π(i,j) == NIL
        print "no path from" i "to" j "exists"
    else PRINT-ALL-PAIRS-SHORTEST-PATH(Π, i, π(i,j))
        print j
```

```C++
EXTEND-SHORTEST-PATHS(L, W)                 // p688, O(V^3)
    n = L.rows
    let L' = (l'(i,j)) be a new n x n matrix
    for i = 1 to n
        for j = 1 to n
            l'(i,j) = ∞
            for k = 1 to n
                l'(i,j) = min(l'(i,j), l(i,k) + w(k,j))
    return L'
```

```C++
FASTER-ALL-PAIRS-SHORTEST-PATHS(W)          // p691, O(V^3lgV)
    n = W.rows
    L(1) = W
    m = 1
    while m < n-1
        let L(2m) be a new n x n matrix
        L(2m) = EXTEND-SHORTEST-PATHS(L(m), L(m))
        m = 2m
    return L(m)
```

```C++
FLOYD-WARSHALL(W)                           // p695, O(V^3)
    n = W.rows
    D(0) = W
    for k = 1 to n
        let D(k) = (d(i,j)(k)) be a new n x n matrix
        for i = 1 to n
            for j = 1 to n
                d(i,j)(k) = min(d(i,j)(k-1), d(i,k)(k-1) + d(k,j)(k-1))
    return D(n)
```

```C++
TRANSITIVE-CLOSURE(G)                       // p698, O(V^3)
    n = |G.V|
    let T(0) = (t(i,j)(0)) be a new n x n matrix
    for i = 1 to n
        for j = 1 to n
            if i == j or (i,j) ∈ G.E
                t(i,j)(0) = 1
            else t(i,j)(0) = 0
    for k = 1 to n
        let T(k) = (t(i,j)(k)) be a new n x n matrix
        for i = 1 to n
            for j = 1 to n
                t(i,j)(k) = t(i,j)(k-1) || (t(i,k)(k-1) && t(k,j)(k-1))
    return T(n)
```

```C++
JOHNSON(G, w)                               // p704
// O(VElgV) with binary min-heap
// O(V^2lgV + VE) with Fibonacci heap
    compute G', where G'.V = G.V ∪ {s},
        G'E = G.E ∪ {(s, v) : v ∈ G.V}, and
        w(s, v) = 0 for all v ∈ G.V
    if BELLMAN-FORD(G', w, s) == FALSE
        print "the input graph contains a negative-weight cycle"
    else for each vertex v ∈ G'.V
            set h(v) to the value of δ(s, v)
                computed by Bellman-Ford algorithm
        for each edge (u, v) ∈ G'.E
            w2(u, v) = w(u, v) + h(u) - h(v)
        let D = (d(u,v)) be a new n x n matrix
        for each vertex u ∈ G.V
            run DIJKSTRA(G, w2, u) to compute δ2(u, v) for all v ∈ G.V
            for each vertex v ∈ G.V
                d(u,v) = δ2(u,v) + h(v) - h(u)
        return D
```

## [Maximum Flow](#contents)

# [Divide-and-Conquer](#contents)

# [Dynamic Programming](#contents)

# [NP-Completeness](#contents)
