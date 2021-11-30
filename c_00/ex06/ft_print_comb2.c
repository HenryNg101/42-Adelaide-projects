#include <stdio.h>

void ft_print_comb2(void) {
    int count = 0;
    for(char i='0'; i<='9'; i++){
        for(char j='0'; j<='9'; j++){
            for(char k='0'; k<='9'; k++){
                for(char l='0'; l<='9'; l++){
                    if ((i != k) || (j != l)){
                        write(1, &i, 1);
                        write(1, &j, 1);
                        write(1, " ", 1);
                        write(1, &k, 1);
                        write(1, &l, 1);
                        write(1, ", ", 2);
                        count += 1;
                    }
                }
            }
        }
    }
    printf("\n%d", count);
}

void main(void){
    ft_print_comb2();
}
