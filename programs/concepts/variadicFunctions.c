// Variadic are used to handle unknown number of arguments

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




#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...){
    va_list va, va2;
    va_start(va, num);

    int sum = 0;
    va_end(va);
    for(int i=0; i<num+2; i++){
        if(i==1) va_copy(va2, va);
        printf( "%d\n", va_arg(va, int) );
    }
    printf( "----------------------------------\n" );
    for(int i=0; i<num; i++)
        printf( "%d\n", va_arg(va2, int) );

    // va_end(va);
    return sum;
}

int main (){
    printf("%d", sum(3, 5, 7, 3) );
    return 0;
}
