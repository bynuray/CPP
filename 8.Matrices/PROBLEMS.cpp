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