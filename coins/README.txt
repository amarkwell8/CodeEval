Program accepts an argument that contains a list of integers that
represents the amount of change needed. The challenge is to output the
minimum amount of coins needed to give out this change given that there
are one three coins with values of 1, 3, and 5. Given that the minimum
amount of coins will always subtract the largest remaining coin out of
the total of change needed, I took the change needed and subtracted the
amount of the largest coin possible, added that coin to a counter and
then did the same process again, until change needed equaled zero. This
gives the minimum amount of coins needed.