#include <stdio.h>
int main()
{
    int i;
    int start = 0;
    int result = 0;
    for(i=0;i<11;i++){
        printf("%dx8 = %d\n",start , result);
        start= start + 1;
        result= result + 8;
    }
    return 0;
}
// outro loop em p.a, tabuada do 8.
