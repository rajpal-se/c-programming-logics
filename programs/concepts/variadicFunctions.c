// Variadic are used to handle unknown number of arguments

// Program 1
// Simple program to sum up "num" numbers
#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...){
	va_list va;
	va_start(va, num);

	int sum = 0, a;
	for(int i=0; i<num; i++){
		a = va_arg(va, int);
		printf("%d\n", a);
		sum += a;
	}
	va_end(va);
	return sum;
}

int main (){
	printf("Sum: %d", sum(3, 5, 7, 3) );
	return 0;
}

/*-----------------------------------
Output:
5
7
3
Sum: 15
-----------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

// use of "va_copy" function

// Program 2.1
#include <stdio.h>
#include <stdarg.h>

void printArgs(int num, ...){
    va_list va, va2;
    va_start(va, num);
    va_copy(va2, va);

    printf( "Variable va values:\n" );
    for(int i=0; i<num; i++){
        // if(i==1) va_copy(va2, va);
        printf( "%d\n", va_arg(va, int) );
    }
    printf( "Variable va2 values:\n" );
    for(int i=0; i<num; i++)
        printf( "%d\n", va_arg(va2, int) );

    va_end(va);
}

int main (){
    printArgs(3, 5, 7, 3);
    return 0;
}

/*-----------------------------------
Output:
Variable va values:
5
7
3
Variable va2 values:
5
7
3
-----------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

// Program 2.2

#include <stdio.h>
#include <stdarg.h>

void printArgs(int num, ...){
    va_list va, va2;
    va_start(va, num);
    va_start(va2, num);

    printf( "Variable va values:\n" );
    for(int i=0; i<num; i++){
        printf( "%d\n", va_arg(va, int) );
    }
    
    printf( "Variable va2 values:\n" );
    for(int i=0; i<num; i++)
        printf( "%d\n", va_arg(va2, int) );

    va_end(va);
    va_end(va2);
}

int main (){
    printArgs(3, 5, 7, 3);
    return 0;
}

/*-----------------------------------
Output:
Variable va values:
5
7
3
Variable va2 values:
5
7
3
-----------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

// Program 2.3

#include <stdio.h>
#include <stdarg.h>

void printArgs(int num, ...){
    va_list va, va2;
    va_start(va, num);

    printf( "Variable va values:\n" );
    for(int i=0; i<num+2; i++){
        if(i==1) va_copy(va2, va);
        printf( "%d\n", va_arg(va, int) );
    }
    va_end(va);
    
    printf( "Variable va2 values:\n" );
    for(int i=0; i<num; i++)
        printf( "%d\n", va_arg(va2, int) );

    va_end(va2);
}

int main (){
    printArgs(3, 5, 7, 3);
    return 0;
}

/*-----------------------------------
Output:
Variable va values:
5
7
3
60		// garbage value
208796		// garbage value
Variable va2 values:
7
3
60		// garbage value
-----------------------------------*/
