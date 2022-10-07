# Graphs

## DFS and BFS

### BFS Tree

- tree we made while traversing a graph in bfs style
- problems
    - level order traversal

### DFS Tree

- <https://codeforces.com/blog/entry/68138>

## Graph Cycle

> how to detect cycle in graphs

- in directed graph
- in undirected graph

- methods
    - using colors
    - negative cycle using
        - floyd warshalls
        - bellman ford
- assign directions to edges so that the graph remain acyclic
- clone a directed acyclic graph
- disjoint set

## Topological sort

> possible only for directed acyclic graphs

- find all possible topological graphs
- methods
    - dfs
    - khan's algo
- maximim edges that can be added to dag so it still remains dag
- longest path between pair of vertices
- longest path in dag

## Minimum Spanning Trees

> this is tree whihch includes all the vertices of the graph and
> the weight is minimum for them.
> don't make sense for unweighted graphs

- methods
    - prim's algo
    - kruskals algo
    - boruvka's algo
- total no of spanning tree of a graph
- minimum product spanning tree

## Backtracking

- rat in the maze
- n-queens problem
- m-colouring problem
- hamiltoninan cycle
- permutaion of numbers such that the sum of two consequtive numbers is a prefect square

## Sortest Paths

> here we try to find shortest path from a given vertex to all the remaning vertex

- methods - single pair shortest path
    - dijkstra's algorithm
    - bellman ford's algorithm
- methods - all pair shortest path
    - floyd warshall algorithm
    - johnson's algorithm
- dag shortest path
- in unweighted graph

## Connectivity

> find if there is path between two vertices

- articulation points or cut vertices
- biconnected components
- bridges
- eulerian path and circoit
    - felury algorithm
- strongly connected components
- transtive closure of graph

- count all possible walks form a source to destination
