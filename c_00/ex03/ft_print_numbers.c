void ft_print_numbers(){
    for(int a = '0'; a <= '9'; a++){
        write(1, &a ,1);
    }
}

void main(void) {
    ft_print_numbers();
}