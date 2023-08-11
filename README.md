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
- 
At the end of the race we can write the results as a string of characters indicating the order in which runners crossed the finish line.

For example: ZZAZAA

We can see there were two teams: A and Z. Team A’s runners finished in 3rd, 5th and 6th place. Team Z’s runners finished in 1st, 2nd and 4th place.

Each runner is assigned a score equal to their finishing place. In the example above team Z’s runners achieved scores of 1, 2 and 4. Team A’s runners scores were 3, 5, and 6 respectively. The team’s score is the sum of the members score divided by the number of people on the team. So team A’s score is (3+5+6)/3 = 14/3=4.66 and team Z’s score is (1+2+4)/3=7/3=2.33
