# ============================================
# 🔍 SEARCHING & SORTING - EASY NOTES + CODE
# ============================================


# ============================================
# 📌 1. SEARCHING IN ARRAY
# ============================================

# Searching = Finding a specific value in an array


# ============================================
# 🔹 TYPES OF SEARCHING
# ============================================

# 1. Linear Search (Sequential Search)
# 2. Binary Search


# ============================================
# 🔹 LINEAR SEARCH (EASY IDEA)
# ============================================

# 👉 Check elements one by one from start
# 👉 If found → return index
# 👉 If not found → return -1

# Example:
# Array = [3, 4, 7, 1, 0]
# Target = 1
# Check → 3 ❌ → 4 ❌ → 7 ❌ → 1 ✅ (Found)


def linear_search(arr, target):
    # Loop through each element
    for i in range(len(arr)):
        if arr[i] == target:
            return i   # Element found → return index
    return -1          # Element not found


# Test
arr = [3, 4, 7, 1, 0]
print(linear_search(arr, 1))  # Output: 3



# ============================================
# 🔹 BINARY SEARCH (EFFICIENT)
# ============================================

# 👉 Works ONLY on SORTED array
# 👉 Divide & Conquer approach

# Steps:
# 1. Find middle element
# 2. If target == middle → return index
# 3. If target > middle → search right half
# 4. If target < middle → search left half
# 5. Repeat until found or not found

# Example:
# Array = [1, 2, 3, 4, 5]
# Target = 4


def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            return mid  # Found

        elif arr[mid] < target:
            left = mid + 1  # Search right

        else:
            right = mid - 1  # Search left

    return -1  # Not found


# Test
arr = [1, 2, 3, 4, 5]
print(binary_search(arr, 4))  # Output: 3



# ============================================
# 📌 2. SORTING
# ============================================

# Sorting = Arranging elements in order

# Types:
# Ascending → 1, 2, 3, 4
# Descending → 4, 3, 2, 1


# ============================================
# 🔹 BUBBLE SORT (EASY BUT SLOW)
# ============================================

# 👉 Compare adjacent elements
# 👉 Swap if they are in wrong order
# 👉 Largest element moves to end each iteration

# Example:
# [5, 2, 4]
# → [2, 5, 4]
# → [2, 4, 5]


def bubble_sort(arr):
    n = len(arr)

    # Outer loop → number of passes
    for i in range(n):

        # Inner loop → comparison
        for j in range(0, n - i - 1):

            # Swap if left > right
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


# Test
arr = [5, 2, 4, 1, 3]
print(bubble_sort(arr))  # Output: [1, 2, 3, 4, 5]



# ============================================
# 🧠 QUICK MEMORY TRICKS
# ============================================

# Linear Search:
# "Check one by one"

# Binary Search:
# "Divide into half (FAST)"

# Bubble Sort:
# "Big element bubbles to top/end"


# ============================================
# ⏱️ TIME COMPLEXITY (IMPORTANT FOR EXAMS)
# ============================================

# Linear Search → O(n)
# Binary Search → O(log n)
# Bubble Sort → O(n^2)


# ============================================
# ✅ END OF NOTES
# ============================================