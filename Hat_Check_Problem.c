#include <stdio.h>
 
// Recursive function to count the derangements of an n–element set
int derangements(int n)
{
    // base case
    if (n == 1 || n == 2) {
        return n - 1;
    }
 
    // recur using the recurrence relation
    return (n - 1) * (derangements(n - 1) + derangements(n - 2));
}
 
int main(void)
{
    int n = 4;
    printf("The total number of derangements of a %d–element set is %d",
        n, derangements(n));
 
    return 0;
}
