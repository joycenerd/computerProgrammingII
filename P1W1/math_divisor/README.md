## PROBLEM DESCRIPTION ##

Let D, Q1, Q2, R1, and R2 be positive integers. If (Q1-R1)=D*x and (Q2-R2)=D*y for some integers x and y, then how many values of divisor D that will satisfy the above constraints? Output all the values of D if it exists. For example, if Q1 = 109, R1 = 1, Q2 = 75, and R2 = 3, then D can be 1, 2, 3, 4, 6, 9, 12, 18, or 36. 

## TECHNICAL SPECIFICATION ##

1.	D, Q1, Q2, R1, and R2 are positive integers and at most 200.
2.	R1 < Q1
3.	R2 < Q2

## INPUT ##

The first line contains an integer n which indicates the number of test cases. Each of the following n lines contains the values of Q1, R1, Q2, and R2 sequentially.

## OUTPUT ##

For each test cases, output the values from small to large of divisor D that satisfies the constraints in one line. There is a space between two values.

## SAMPLE INPUT ##

2
109 1 75 3
27 3 38 2

## SAMPLE OUTPUT ##

1 2 3 4 6 9 12 18 36
1 2 3 4 6 12


