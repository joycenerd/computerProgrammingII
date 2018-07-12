Write a program to compute the coefficients of a polynomial. Suppose we are given a product (ax^2 + bx + c)^d, our program must output the coefficients of the resulting polynomial. For example, let a be 1, b be 2, c be 3, and d be 2, then (x^2 + 2x + 3)^2 = x^4 + 4 x^3 + 6 x^2 + 12 x + 9. Given a, b, c, and d please compute all the coefficients.

## INPUT ##

The input consists of M cases. The first line of the input contains only one positive integer M indicating the number of, followed by M following cases.
The test cases consists of four integers a, b, c(-3 <= a, b, c <= 3 and a != 0), d (1 <= d <= 10).

## OUTPUT ##

The coefficients of (ax^2 + bx + c)^d, with spaces seperated.

## SAMPLE INPUT ##

1
1 2 3 2

## SAMPLE OUTPUT ##

1 4 10 12 9
