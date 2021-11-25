void ft_print_comb(void){
    for(int i='0'; i<='9'; i++){
        for(int j=i+1; j<='9'; j++){
            for(int k=j+1; k<='9'; k++){
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                write(1, ", ", 2);
            }
        }
    }
}

void main(void){
    ft_print_comb();
}