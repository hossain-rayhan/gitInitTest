#include <stdio.h>
#include<math.h> // 1. need to include for sqrt function
     const int MAX = 25; // 2. add int
     double add_all( double [], int );// 3. add the semicolon
int main() { // 4. remove semicolon after main
        double a[MAX]; // 5. add the third bracket for array
        double avg, stddev;
        int i ;
        /* wait for the user to enter all 25 values */
        for( i=0; i < MAX; i = i+1 ) // 6. i =  // 24. i < Max, not <=
        {
           scanf("%lf", &a[i] ); // 7. not scan, it's scanf // 8.  put & before a[i]
        }
        /* call a function to add up all the values in array a */
        double total = add_all(  a, MAX ); // 9. add the int keyword // 10. pass only the a(name of array)
        avg = total / 25;
        /* find the standard deviation of all 25 values in
           array a by first multiplying each (a[i]-average)
           by itself, then adding them */
        for( i=0; i< MAX; i++ ) // 11. remove the semicolon // 22. it should be < instead of >
        {
           total += (a[i]-avg)*(a[i]-avg);// 12. put a * operator
        }
        printf("new total %d\n", total);
/* Now take the square root of (1/MAX) times total */ stddev = sqrt( (1.0 /MAX)*total ); // 13. sqrt - spelling mistake // 25. Make 1.0
/* Print the average and standard deviation to the screen */ printf( "The average is %lf \n", avg ); // 14. remove the &
printf( "The standard deviation is %lf\n", stddev ); return 0; // 15. return 0
}
     double add_all( double a[], int s ) // 16. make a an array // 17. make the return type double
     {
        int i; double total; // 18. make dataType double for total
        for( total=0, i=0; i<s; ++i ) // 19. replace the && with comma (,) // 23. i < s, not <=
        {
           total += a[ i ]; // 20. use += instead of =
        }
return total; } // 21. return total instead of i
