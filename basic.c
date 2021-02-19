// Program #1
#include <stdio.h>

int main(){
    float f = 0.1;      // actually f = 0.100000
  
    if(f == 0.1) printf("YES\n");
    else printf("NO\n");                // NO  (because 0.100000 is NOT equal to 0.1)
    
    if(f == 0.1f) printf("YES\n");      // YES
    else printf("NO\n");
    
    if(f == (float)0.1) printf("YES\n"); // YES
    else printf("NO\n");
    
    return 0;
}



// Program
#include <stdio.h>

int main(){
    int a=10, x;
    x = a-- + ++a;
    printf("%d", x);        // 20
    return 0;
}
