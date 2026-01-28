# The-Scheduling-Algorithm
A simple greedy algorithm for scheduling events in procedural C++

The algorithm assumes the set of events is sorted in an increasing order of finish time. The mechanism for sorting this set is yet to be implemented. The algorithm's design is largely based on the one presented in "Introduction to Algorithms (third edition)" (aka CLRS) in Chapter 16.

## How the algorithm works
Let's take two neighboring events and see how they are situated relative to each other on a timeline. One of them we'll call A[k] and the next after it -- A[m], where m = k + 1. Both events have start and finish times; we'll denote it as A[k].start or A[k].finish.

There are two possible scenarios:
1) A[m].start >= A[k].finish
2) A[m].start < A[k].finish

In (1), the two events are happening one after another without overlap - the ones we want to track and put in a separate subset. Second scenario is where events overlap.

In our greedy startegy, we always start with the first element in the event set (it is reasonable thanks to the set being ordered) creating a single subproblem to solve. Similarly, we could start from the last element. However, making a choice somewhere in the middle would create two subproblems, and that is not the optimal substructure we're looking for in case of greedy strategy.
