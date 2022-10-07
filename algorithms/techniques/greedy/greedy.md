# Greedy Algorithms

- Are optimization algorithms where we have objective to
  maximize or minimize stuff.
- Here at each step we make a choice and choose the optimal
  case which will lead to solution.

## Activity Selection Problem

### Problem

- given list of activities
- return the maximum activities you can do

### Solution

- sort the activities according to their finishing time
- now choose the first one and then keep on choosing
  the next activity if its start time is more than end time of
  currently selected activity

### Proof

- Let $S=\{1,2,\ldots ,n\}$ be the set of activities ordered by finish time.
- Assume that $A\subseteq S$ is an optimal solution, also ordered by finish time;
    - and that the index of the first activity in $A$ is $k$ and $k \neq 1$
    - i.e., this optimal solution does not start with the greedy choice.
- We will show that $B=(A\setminus \{k\})\cup \{1\}$,
    - which begins with the greedy choice (activity 1), is another optimal solution.
  
- Since $f_{1} \leq f_{k}$,
    - and the activities in $A$ are disjoint by definition,
    - the activities in B are also disjoint.
- Since $B$ has the same number of activities as $A$,
    - that is, $|A|=|B|$, $B$ is also optimal.

- Once the greedy choice is made, the problem reduces to
    - finding an optimal solution for the subproblem.
- If $A$ is an optimal solution to the original problem $S$
  containing the greedy choice,
    - then $A^{\prime }=A\setminus \{1\}$ is an optimal solution to the
    - activity-selection problem $S'=\{i\in S:s_{i}\geq f_{1}\}$.

- Why? If this were not the case, pick a solution $B'$ to $S'$
  with more activities than $A'$ containing the greedy choice for $S'$.
- Then, adding $1$ to $B'$ would yield a feasible solution $B$ to $S$
  with more activities than $A$, contradicting the optimality.

## Job Sequencing Problem

### Problem

- given array of jobs with deadline and profit associated with it
- find the maximum profit you can earn

### Solution

- sort by the deadline
- and start doing the jobs

```cpp


## Job Sequencing Problem (Using Disjoint Set)

## Job Sequencing Problem - Loss Minimization

## Job Selection Problem - Loss Minimization Strategy | Set 2

## Huffman Coding

## Efficient Huffman Coding for sorted input

## Huffman Decoding

## Water Connection Problem

## Policemen catch thieves

## Minimum Swaps for Bracket Balancing

## Fitting Shelves Problem

## Assign Mice to Holes
