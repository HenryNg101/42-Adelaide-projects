#include <stdio.h>

void ft_putnbr(int nb){
    char result[] = "";
    int id = 0;
    while (nb != 0){
        char a = 48 + (nb % 10);
        result = a + result;
        nb /= 10;
        id += 1;
    }
    write(1, &result, id);
}

void main(void){
    ft_putnbr(100);
}