# =============================================================
# PROBLEM 1: DYNAMIC ARRAY CONCATENATION (MALLOC & REALLOC)
# =============================================================

- Question:
  Kritik is developing a program to combine two arrays into one by reallocating memory for the 
  first array to double its size and then appending the second array's elements.

- Solution:
  #include <stdio.h>
  #include <stdlib.h>
  int main() {
      int N;
      scanf("%d", &N);
      int *arr = (int *)malloc(N * sizeof(int));
      for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
      arr = (int *)realloc(arr, 2 * N * sizeof(int));
      for (int i = 0; i < N; i++) scanf("%d", &arr[N + i]);
      for (int i = 0; i < 2 * N; i++) printf("%d ", arr[i]);
      free(arr);
      return 0;
  }

- Approach:
  First, allocate memory for N integers using malloc. After reading the first set of data, 
  expand that same memory block using realloc to fit 2*N integers, then fill the new space.

- Key Point:
  The realloc function allows the program to expand existing memory while preserving 
  the data already stored in the first N positions.

- Explanation:
  This demonstrates dynamic memory management. By using realloc, we avoid creating 
  a third array; instead, we efficiently grow the first array to accommodate the 
  incoming data from the second array.

# =============================================================
# PROBLEM 2: MANUAL STRING COMPARISON (STRCMP BLACKLISTED)
# =============================================================

- Question:
  Help Liam compare two strings (S1 and S2) to check if they are equal without 
  using the blacklisted 'strcmp' function.

- Solution:
  #include <stdio.h>
  int main() {
      char s1[100], s2[100];
      int i, isEqual = 1;
      scanf("%s %s", s1, s2);
      for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
          if (s1[i] != s2[i]) {
              isEqual = 0;
              break;
          }
      }
      if (isEqual) printf("Strings are equal.");
      else printf("Strings are not equal.");
      return 0;
  }

- Approach:
  Iterate through both character arrays simultaneously using a loop. At each index, 
  compare the characters. If any mismatch is found before the null terminator (\0), 
  mark them as unequal.

- Key Point:
  The loop must check for the null terminator of both strings to ensure that 
  strings of different lengths (e.g., "hell" and "hello") are correctly identified as unequal.

- Explanation:
  Since the standard library function is prohibited, we manually implement the logic 
  by comparing ASCII values character by character until the end of the strings.

# =============================================================
# PROBLEM 3: LIC AGENT RECORD MANAGEMENT
# =============================================================

- Question:
  Develop an application to manage LIC agent details including Name, Geographical Location, 
  and a list of N Customer names, then display them in a structured format.

- Solution:
  #include <stdio.h>
  int main() {
      char agent[100], loc[100], cust[100];
      int n;
      fgets(agent, 100, stdin);
      fgets(loc, 100, stdin);
      scanf("%d", &n);
      getchar(); 
      printf("LIC Agent Details:\n%s%sTotal Number of Customers: %d\nNames of Customers:\n", agent, loc, n);
      for (int i = 0; i < n; i++) {
          fgets(cust, 100, stdin);
          printf("%s", cust);
      }
      return 0;
  }

- Approach:
  Use fgets to read the agent name and location to allow for spaces. Read N, then 
  use a loop with fgets to capture each customer name.

- Key Point:
  A getchar() or similar buffer clearing is needed after scanf("%d", &n) to prevent 
  the newline character from skipping the first fgets call in the loop.

- Explanation:
  This problem focuses on handling mixed input (strings with spaces and integers) 
  and maintaining a specific output structure for record-keeping.

# =============================================================
# PROBLEM 4: VOWEL REMOVAL TOOL
# =============================================================

- Question:
  Implement a program for Ishu that eliminates all vowels (both uppercase and lowercase) 
  from a string without using inbuilt string functions.

- Solution:
  #include <stdio.h>
  int main() {
      char str[1000];
      fgets(str, 1000, stdin);
      for (int i = 0; str[i] != '\0'; i++) {
          char c = str[i];
          if (!(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')) {
              printf("%c", c);
          }
      }
      return 0;
  }

- Approach:
  Traverse the input string character by character. For each character, check if 
  it matches any of the 10 vowel variants. If it is not a vowel, print it.

- Key Point:
  The program must handle special characters, digits, and spaces by leaving 
  them untouched while only filtering out vowels.

- Explanation:
  This is a filtering algorithm. By using a conditional check inside a loop, 
  we effectively "delete" characters from the output stream without needing 
  complex string manipulation functions.

# =============================================================
# PROBLEM 5: ALPHABETICAL NAME ABBREVIATION
# =============================================================

- Question:
  Help Bob generate abbreviations for names (First, Middle, Last) in the 
  format: F. M. Lastname.

- Solution:
  #include <stdio.h>
  int main() {
      char f[50], m[50], l[50];
      scanf("%s %s %s", f, m, l);
      printf("%c. %c. %s", f[0], m[0], l);
      return 0;
  }

- Approach:
  Input three strings representing the names. Print the first character (index 0) 
  of the first and second strings followed by a dot, and the entire third string.

- Key Point:
  The output format strictly requires a dot and a space after each initial.

- Explanation:
  This exercise teaches basic string indexing and formatted output, demonstrating 
  how to extract specific data (initials) from a larger string.

# =============================================================
# PROBLEM 6: ALPHABETICAL NAME SORTING
# =============================================================

- Question:
  Emma needs to input N names and arrange them in alphabetical order.

- Solution:
  #include <stdio.h>
  #include <string.h>
  int main() {
      int n;
      scanf("%d", &n);
      char names[n][15], temp[15];
      for (int i = 0; i < n; i++) scanf("%s", names[i]);
      for (int i = 0; i < n - 1; i++) {
          for (int j = 0; j < n - i - 1; j++) {
              if (strcmp(names[j], names[j+1]) > 0) {
                  strcpy(temp, names[j]);
                  strcpy(names[j], names[j+1]);
                  strcpy(names[j+1], temp);
              }
          }
      }
      for (int i = 0; i < n; i++) printf("%s\n", names[i]);
      return 0;
  }

- Approach:
  Store N names in a 2D character array. Use a Nested Loop (Bubble Sort) and 
  strcmp to compare the names, swapping them with strcpy when necessary.

- Key Point:
  The array size constraints (Length <= 14) determine the second dimension of 
  the 2D character array.

- Explanation:
  This program implements a standard sorting algorithm applied to strings. 
  It ensures the output list is organized lexicographically from A to Z.
