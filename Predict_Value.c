#include<stdio.h>
int main()
{
    int x=3,y=5;
    if(x==3)
        printf("\n%d",x);
    else;
        printf("\n%d",y);
}

// Now, let's analyze the code execution:

//     x is initialized with the value 3.
//     The if statement checks if x is equal to 3, which is true.
//     The printf("\n%d", x); statement inside the if block gets executed and prints 3.
//     The else; statement is encountered, but it's just an empty statement (due to the semicolon after else), so nothing happens.
//     Finally, printf("\n%d", y); outside the if-else block gets executed and prints 5.

// 3
// 5

// The if statement is true, so 3 is printed. Then, regardless of the if condition, 
// 5 is printed because the else statement is not associated with the if due to the semicolon.