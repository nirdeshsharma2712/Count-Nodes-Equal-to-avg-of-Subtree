# 📊 LeetCode Problem: Count Nodes Equal to Average of Subtree

## 🧩 Problem Statement

Given the `root` of a binary tree, **return the number of nodes** where the **value of the node is equal to the average of the values** in its **subtree**.

> **Note**:
> - The average of `n` elements is the **sum of the n elements divided by n**, **rounded down** to the nearest integer.
> - A subtree of a node is defined as the **node plus all of its descendants**.


## 🧠 Approach

We perform a **post-order traversal** of the tree, and for each node, we:
- Recursively calculate the **sum and count** of the subtree with the help of pair to keep track of count and sum at same time.
- Compute the **average** and check if it matches the **node’s value**.
- Use a counter to track all such nodes.


## ✅ Example Walkthrough

### Example 1

<img src = "https://assets.leetcode.com/uploads/2022/03/15/image-20220315203925-1.png">

##### Input: [4,8,5,0,1,null,6]
##### Output: 5

> **Subtree Averages:**
> - Node 4 → (4 + 8 + 5 + 0 + 1 + 6) / 6 = 4 ✅
> - Node 5 → (5 + 6) / 2 = 5 ✅
> - Node 0 → 0 / 1 = 0 ✅
> - Node 1 → 1 / 1 = 1 ✅
> - Node 6 → 6 / 1 = 6 ✅

### Example 2

<img src = "https://assets.leetcode.com/uploads/2022/03/26/image-20220326133920-1.png">

##### Input: root = [1]
##### Output: 1


## 🛠️ Constraints

- 🧮 Number of nodes: `1 ≤ nodes ≤ 1000`  
- 🔢 Node values: `0 ≤ Node.val ≤ 1000`  
