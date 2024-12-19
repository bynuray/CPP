// https://www.hackerrank.com/contests/matrices-1697666323/challenges

// 146. Maximum Modulo Element
// Given an m × n matrix, find the largest element whose value is a multiple of its position's sum.

// Input Format: The first line contains two integers, m and n, separated by a space. The next m lines each contain n integers, representing the matrix.

// Constraints
// 1 ≤ m, n ≤ 100 
// 1 ≤ Matrix[i][j] ≤ 1000

// Output Format:Print the largest modulo element value and its indices as "Value x y".

// Sample Input 0
// 3 4
// 10 5 20 15
// 6 8 2 9
// 25 30 1 12
// Sample Output 0
// Value: 30 2 1

// Explanation: 30 is the largest modulo, 2 is the row index, 1 is the column index.

// Sample Input 1
// 2 2
// 3 6
// 12 5
// Sample Output 1
// Value: 12 1 0

// Sample Input 2
// 4 4
// 7 14 3 4
// 2 16 8 10
// 15 6 11 9
// 12 5 20 18
// Sample Output 2
// Value: 20 3 2

// 147. Count Unique Elements
// The first line contains two integers, m and n, separated by a space. The next m lines each contain n integers, representing the matrix.

// Input Format:The first line contains two integers, m and n, separated by a space.
// The next m lines each contain n integers, representing the matrix.
// Constraints
// 1 ≤ m, n ≤ 100
// 1 ≤ Matrix[i][j] ≤ 1000
// Output Format:Print the count of different elements in the matrix.

// Sample Input 
// 3 4
// 2 5 3 3
// 7 8 2 9
// 5 10 7 10
// Sample Output: 7

// Sample Input 
// 2 3
// 3 3 3
// 1 2 3
// Sample Output: 3

// Sample Input 2
// 4 4
// 10 20 10 5
// 5 10 20 10
// 20 10 5 5
// 5 10 20 20
// Sample Output: 3

// 148. Diagonal and Above Zeroing
// Given a square matrix of order n, replace all its elements located on the main diagonal and above it with zeros.
// Input Format: The first line contains a single integer n, the order of the square matrix.The next n lines each contain n real numbers, representing the matrix.
// Constraints
// 1 ≤ n ≤ 100
// -1000 ≤ Matrix[i][j] ≤ 1000
// Output Format: Print the modified square matrix after replacing the elements.

// Sample Input 0
// 4
// 1 3 2 7
// 5 4 7 8
// 9 6 4 9
// 1 2 2 1
// Sample Output 0
// 0 0 0 0
// 5 0 0 0
// 9 6 0 0
// 1 2 2 0

// Explanation: The main diagonal and above it.

// Sample Input 1
// 2
// 5 2
// 3 5
// Sample Output 1
// 0 0
// 3 0

// Sample Input 2
// 5
// 1 2 3 4 5
// 5 6 7 8 9
// 9 10 11 12 13
// 13 14 15 16 17
// 17 18 19 20 21
// Sample Output 2
// 0 0 0 0 0
// 5 0 0 0 0
// 9 10 0 0 0
// 13 14 15 0 0
// 17 18 19 20 0

// 149. Diagonal Sums
// Given a square matrix of order n, find the sum of the elements on the main diagonal and the sum of the elements on the secondary diagonal.
// Input Format: The first line contains a single integer n, the order of the square matrix.The next n lines each contain n real numbers, representing the matrix.
// Constraints
// 1 ≤ n ≤ 100
// -1000 ≤ Matrix[i][j] ≤ 1000
// Output Format: Print two real numbers separated by a space: the sum of the main diagonal elements and the sum of the secondary diagonal elements.

// Sample Input 0
// 3
// 1 3 2
// 5 0 7
// 9 6 4
// Sample Outpu: 5 11

// Explanation: The sum of main diagonal elements: 1 + 0 + 4 = 5 The sum of secondary diagonal elements: 2 + 0 + 9 = 11

// Sample Input 1
// 2
// -1 2
// 3 0
// Sample Output: -1 5

// Sample Input 2
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Sample Output: 34 34

// 150. Swap Rows and Columns
// Given a square matrix of order n, swap its rows and columns to create a new matrix.
// Input Format: The first line contains a single integer n, the order of the square matrix.The next n lines each contain n real numbers, representing the matrix.
// Constraints
// 1 ≤ n ≤ 100
// -1000 ≤ Matrix[i][j] ≤ 1000
// Output Format: Print the modified square matrix after swapping rows and columns.

// Sample Input 0
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 0
// 1 4 7
// 2 5 8
// 3 6 9

// Sample Input 1
// 2
// -1 2
// 3 4
// Sample Output 1
// -1 3
// 2 4

// Sample Input 2
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Sample Output 2
// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16

// 151. Row Sum to Array
// Given a matrix of size n × m, calculate the sum of elements in each row and create a one-dimensional array where each element is equal to the sum of the elements in the corresponding row of the matrix.
// Input Format: The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.The next n lines each contain m real numbers, representing the matrix.
// Constraints
// 1 ≤ n, m ≤ 100
// -1000 ≤ Matrix[i][j] ≤ 1000
// Output Format: Print a one-dimensional array of size m containing the sums of the rows of the matrix, separated by spaces.

// Sample Input 0
// 3 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sample Output 0
// 10 26 42

// Sample Input 1
// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1
// 4 15

// Sample Input 2
// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2
// 21 3 45 6


// 152. Row Product to Array
// Given a matrix of size n × m, calculate the product of elements in each row and create a one-dimensional array where each element is equal to the product of the elements in the corresponding row of the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print a one-dimensional array of size m containing the products of the rows of the matrix, separated by spaces.

// Sample Input 0

// 3 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sample Output 0

// 24 1680 11880
// Sample Input 1

// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1

// -6 120
// Sample Input 2

// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2

// 98 2 450 8


// 153. Minimum Row Values to Array
// Given a matrix of size n × m, calculate the smallest element in each row and create a one-dimensional array where each element is equal to the smallest element in the corresponding row of the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print a one-dimensional array of size m containing the smallest values of the rows of the matrix, separated by spaces.

// Sample Input 0

// 3 4
// 5 2 9 4
// 8 1 7 3
// 6 10 11 12
// Sample Output 0

// 2 1 6
// Sample Input 1

// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1

// -1 4
// Sample Input 2

// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2

// 7 1 15 2

// 154. Column Sum to Array
// Given a matrix of size n × m, calculate the sum of elements in each column and create a one-dimensional array where each element is equal to the sum of the elements in the corresponding column of the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print a one-dimensional array of size n containing the sums of the columns of the matrix, separated by spaces.

// Sample Input 0

// 3 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sample Output 0

// 15 18 21 24
// Sample Input 1

// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1

// 3 7 9
// Sample Input 2

// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2

// 25 50

// 155. Minimum Column Values to Array
// Given a matrix of size n × m, calculate the smallest element in each column and create a one-dimensional array where each element is equal to the smallest element in the corresponding column of the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print a one-dimensional array of size n containing the smallest values of the columns of the matrix, separated by spaces.

// Sample Input 0

// 3 4
// 5 2 9 4
// 8 1 7 3
// 6 10 11 12
// Sample Output 0

// 5 1 7 3
// Sample Input 1

// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1

// -1 2 3
// Sample Input 2

// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2

// 1 2

// 156. Column Value Differences to Array
// Given a matrix of size n × m, calculate the difference between the largest and smallest element in each column and create a one-dimensional array where each element is equal to the difference in the corresponding column of the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print a one-dimensional array of size n containing the differences between the largest and smallest values in the columns of the matrix, separated by spaces.

// Sample Input 0

// 3 4
// 5 2 9 4
// 8 1 7 3
// 6 10 11 12
// Sample Output 0

// 3 9 4 9
// Sample Input 1

// 2 3
// -1 2 3
// 4 5 6
// Sample Output 1

// 5 3 3
// Sample Input 2

// 4 2
// 7 14
// 1 2
// 15 30
// 2 4
// Sample Output 2

// 14 28

// 157. Average of Extreme Values
// Given a matrix of size n × m, calculate the arithmetic average of the largest and smallest values in the matrix.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the arithmetic average of the largest and smallest values in the matrix, rounded to two decimal places.

// Sample Input 0

// 3 4
// 5.2 2.3 9.8 4.1
// 8.6 1.2 7.7 3.5
// 6.9 10.1 11.4 12.3
// Sample Output 0

// 6.75
// Sample Input 1

// 2 3
// -1.5 2.7 3.8
// 4.2 5.9 6.3
// Sample Output 1

// 2.40
// Sample Input 2

// 4 2
// 7.1 14.3
// 1.8 2.5
// 15.2 30.0
// 2.4 4.6
// Sample Output 2

// 15.90


// 158. Swap Rows with Extreme Values
// Given a matrix of size n × m, swap the row containing the element with the largest value with the row containing the element with the smallest value. It is assumed that these elements are unique.

// Input Format

// The first line contains two integers, n and m, separated by a space, indicating the number of rows and columns of the matrix.

// The next n lines each contain m real numbers, representing the matrix.

// Constraints

// 1 ≤ n, m ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the matrix after swapping the rows.

// Sample Input 0

// 3 4
// 5 2 9 4
// 8 1 7 3
// 6 10 11 12
// Sample Output 0

// 5 2 9 4
// 6 10 11 12
// 8 1 7 3
// Sample Input 1

// 2 3
// -5 2 3
// 4 6 3
// Sample Output 1

// 4 6 3
// -5 2 3
// Sample Input 2

// 4 2
// 7 14
// 1 25
// 2 30
// 2 4
// Sample Output 2

// 7 14
// 2 30
// 1 25
// 2 4




// 159. Rows with All Zeros
// Given an integer square matrix of order n, find the line numbers (row numbers) whose elements are all zeros.

// Input Format

// The first line contains a single integer n, the order of the square matrix.

// The next n lines each contain n integers, representing the matrix.

// Constraints

// 1 ≤ n ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the line numbers (row numbers) whose elements are all zeros, separated by spaces.

// Sample Input 0

// 3
// 0 0 0
// 0 1 0
// 0 0 0
// Sample Output 0

// 1 3
// Sample Input 1

// 4
// 0 0 0 0
// 0 0 0 1
// 0 0 0 0
// 0 0 0 0
// Sample Output 1

// 1 3 4
// Sample Input 2

// 2
// 2 0
// 0 0
// Sample Output 2

// 2

// 160. Rows with Equal Elements
// Given an integer square matrix of order n, find the line numbers (row numbers) where all elements within each row are equal to each other.

// Input Format

// The first line contains a single integer n, the order of the square matrix.

// The next n lines each contain n integers, representing the matrix.

// Constraints

// 1 ≤ n ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the line numbers (row numbers) where all elements are equal to each other, separated by spaces.

// Sample Input 0

// 3
// 2 2 2
// 4 4 4
// 1 1 1
// Sample Output 0

// 1 2 3
// Sample Input 1

// 4
// 0 0 0 0
// 3 3 3 3
// 1 1 1 1
// 2 2 2 2
// Sample Output 1

// 1 2 3 4
// Sample Input 2

// 2
// 5 5
// 3 2
// Sample Output 2

// 1

// 161. Monotonic Sequences in Rows
// Given an integer square matrix of order n, determine the line numbers (row numbers) where the elements in each row form a sequence, which can be either strictly increasing or strictly decreasing.

// Input Format

// The first line contains a single integer n, the order of the square matrix.

// The next n lines each contain n integers, representing the matrix.

// Constraints

// 1 ≤ n ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the row numbers where the elements form a strictly increasing or strictly decreasing sequences, separated by spaces.

// Sample Input 0

// 3
// 1 2 3
// 4 5 5
// 9 7 5
// Sample Output 0

// 1 3
// Sample Input 1

// 4
// 3 2 1 0
// -1 0 1 2
// 5 6 7 8
// -5 -2 0 3
// Sample Output 1

// 1 2 3 4
// Sample Input 2

// 3
// 5 3 3
// 1 2 3
// 2 0 1
// Sample Output 2

// 2

// 162. Columns with Symmetrical Sequences
// Given an integer square matrix of order n, determine the column numbers where the elements in each column form symmetrical sequences, also known as palindromes.

// Input Format

// The first line contains a single integer n, the order of the square matrix.

// The next n lines each contain n integers, representing the matrix.

// Constraints

// 1 ≤ n ≤ 100

// -1000 ≤ Matrix[i][j] ≤ 1000

// Output Format

// Print the column numbers where the elements form symmetrical sequences (palindromes), separated by spaces.

// Sample Input 0

// 3
// 1 2 1
// 4 0 5
// 9 2 9
// Sample Output 0

// 2
// Explanation 0

// Column: 2 is [2, 0, 2]

// Sample Input 1

// 4
// 3 1 0 3
// 2 5 6 6
// 2 5 2 6 
// 3 1 8 3
// Sample Output 1

// 1 2 4
// Sample Input 2

// 2
// 5 3
// 1 3
// Sample Output 2

// 2


163. Swap Columns in Integer Matrix
Given natural numbers i and j (1 ≤ i < j ≤ m), and an integer matrix of size n × m, swap the i-th and j-th columns in the matrix.

Input Format

The first line contains three integers separated by spaces: n (number of rows), m (number of columns), i (1 ≤ i ≤ m), and j (i < j ≤ m).

The next n lines each contain m integers, representing the matrix.

Constraints

1 ≤ n, m ≤ 100

-1000 ≤ Matrix[i][j] ≤ 1000

Output Format

Print the modified integer matrix after swapping the i-th and j-th columns.

Sample Input 0

3 4
1 2 3 4
5 6 7 8
9 10 11 12
1 
3
Sample Output 0

3 2 1 4
7 6 5 8
11 10 9 12
Sample Input 1

2 3
1 2 3
4 5 6
2 
3
Sample Output 1

1 3 2
4 6 5
Sample Input 2

4 2
7 14
1 2
15 30
2 4
1 
2
Sample Output 2

14 7
2 1
30 15
4 2


164. Fill 5x6 Matrix in a Specific Pattern
Fill a 5x6 matrix with the following pattern:

1  2  3  4  5  6
12 11 10 9  8  7
13 14 15 16 17 18
24 23 22 21 20 19
25 26 27 28 29 30
----------> 
          |
<---------- 
|
----------> 
          |
<---------- 
|
---------->
Input Format

No input is not required for this problem.

Constraints

None

Output Format

Print the 5x6 array filled with the provided pattern.

Sample Output 0

1 2 3 4 5 6
12 11 10 9 8 7
13 14 15 16 17 18
24 23 22 21 20 19
25 26 27 28 29 30
Explanation 0

cpp /* ----------> | <---------- | ----------> | <---------- | ----------> */


165. Fill 5x6 Array in a Specific Pattern
Fill a 5x6 array with the following pattern:

1  2  3  4  5  6
7  8  9  10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
Input Format

No input is required for this problem.

Constraints

None

Output Format

Print the 5x6 array filled with the provided pattern.

Sample Output 0

1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
Explanation 0

cpp /* ----------> <---------- ----------> <---------- ----------> */

