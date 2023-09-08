# LeetCode Problem: Middle of the Linked List

## Problem Description

Given a singly linked list, find the middle of the linked list.

If there are two middle nodes, return the second middle node.

**Example 1:**

Input: 1 -> 2 -> 3 -> 4 -> 5
Output: 3
Explanation: The middle node of this linked list is 3.

**Example 2:**

Input: 1 -> 2 -> 3 -> 4 -> 5 -> 6
Output: 4
Explanation: The second middle node of this linked list is 4.

## Constraints

- The given linked list will have at least one node and at most 100 nodes.

## Solutions

### Approach 1: Two Pointer Technique

- Initialize two pointers, `slow` and `fast`, to the head of the linked list.
- Traverse the linked list with `fast` moving two steps at a time and `slow` moving one step at a time.
- When `fast` reaches the end of the list, `slow` will be at the middle node.
- Return the node pointed to by `slow` as the answer.

### Pseudocode

```plaintext
function findMiddle(head):
    Initialize two pointers, slow and fast, to head
    while fast is not None and fast.next is not None:
        Move slow one step
        Move fast two steps
    Return the node pointed to by slow
```
