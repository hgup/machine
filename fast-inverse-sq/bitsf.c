#include <stdio.h>

long getbin(long decimal_num){
    long binary_num = 0, i = 1, remainder;
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }
    return binary_num;
}

int main(){
    long n = 128;
    int val = 1;
    long n_sf = n >> val;
    printf("right bit shift %ld >> %d: %ld\n",n, val, n_sf);
    n_sf = n << val;
    printf("left bit shift %ld << %d: %ld\n",n, val, n_sf);

    float y = 3.5;
    n = * (long *) &y;
    // printf("\n\naddr of (long) %ld as a long is %ld\n",n,&n);
    printf("\n\naddr of (float)y= %lf as an (addr) is %p\n",y,&y);
    printf("\n\naddr of (long)n= %ld as an (addr) is %p\n",n,&n);
    printf("\n\naddr of (long)n= %ld as an (addr) is %p\n",n);
}