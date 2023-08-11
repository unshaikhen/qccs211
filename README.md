# qccs211
All projects from CS211 from Dr. Waxman. If you are a current CS211 student, do not copy any of the code.

## Project 2: Odometer
Write a program that simulates a digital odometer. It has 6 “windows” and will output the miles as you travel, starting at 000000 and ending at 999999.

## Project 3: Scoring the Race
Some number of teams are participating in a race. You are not told how many teams are participating but you do know that:

- Each team has a name, which is one of the uppercase letters A-Z.
- No two teams have the same name, so there are a maximum number of 26 teams.
- Each team has the same number of members.
- No two runners cross the finish line at the same time – i.e. there are no ties.

At the end of the race we can write the results as a string of characters indicating the order in which runners crossed the finish line.

For example: ZZAZAA

We can see there were two teams: A and Z. Team A’s runners finished in 3rd, 5th and 6th place. Team Z’s runners finished in 1st, 2nd and 4th place.

Each runner is assigned a score equal to their finishing place. In the example above team Z’s runners achieved scores of 1, 2 and 4. Team A’s runners scores were 3, 5, and 6 respectively. The team’s score is the sum of the members score divided by the number of people on the team. So team A’s score is (3+5+6)/3 = 14/3=4.66 and team Z’s score is (1+2+4)/3=7/3=2.33

## Project 4: Eight Queens Puzzle with Backtracking
The Eight Queens Problem is a classic combinatorial puzzle that involves placing eight chess queens on an 8x8 chessboard in such a way that no two queens threaten each other. In other words, no two queens can share the same row, column, or diagonal. The challenge is to find all distinct solutions to this problem. Include backtracking into the main code.

## Project 6: Dumb 8 Queens 
Solve the Eight Queens Problem with brute force and have the output be a 1D array.

## Project 7: Stable Marriage
You have n men and n woman, and their preference rankings of each other, and you need to match them up so that the total matching is “stable.”

## Project 8: Towers of Hanoi (Non-Recursive)
You are given three towers a, b, and c. We start with n rings on tower a and we need to transfer them to tower b subject to the following restrictions:

- We can only move one ring at a time, and
- We may never put a larger numbered ring on top of a smaller numbered one.
  
There are always 3 towers. Your program will prompt the user for the number of rings.

## Project 9: Towers of Hanoi (Recursive)
Modify Project 8 so that there is a recursive function that sovles the problem.

## Project 10: Fancy Print for the Eight Queens
In class we went over the code to print out a chessboard. You need to:
1. Augment that code by adding two additional “box”es, wq which represents a picture of a queen placed in a “white” square, and bq, representing a picture of a queens placed in a “black” square.
2. After the code that fills the array board[8][8] with the addresses of bb and wb, insert code to change eight entries in that array to reflect the positions of eight queens on the board. You will get these positions from a one dimensional array q[8] representing a solution to the eight queens problem. The change that you make in these eight places is to replace the pointer in board for one representing either a wq, or bq, as appropriate for that position. You know the eight positions because, given q[i], i represents the column and q[i] represents the row. You can tell whether its black or white by looking at the row and column indexes of its position on the board.
3. The code described above (in 2.) goes into the print function. You pass the arrays q and
board to print. In the function you:
- modify board using q
- print the picture of the board
- “Clean up” array board, by restoring its original values, to get ready for the next call to
print.

## Project 11: Integration Function
Create a function in C++ that will integrate that is able to take in *FUNC as a input

## Project 12: N Queens
By the “n queens problem” we mean the problem of placing n queens on an nXn “chessboard” in such a way that no queen can capture any other on the next move. In class we solved the “8 queens” problem.

Write a function that inputs an integer n and returns the number of solutions to the “n queens” problem. Your function should use the one dimensional representation for the board, the algorithm we discussed in class, and no gotos.

## Project 13: K Bishops on an NxN chessboard
Write a program that inputs two integers n and k, where n>=k. Your program should calculate the number of different ways that k bishops could be placed on an nXn chessboard. Structure your program using the backtracking scheme that we have used for the eight queens problem.
