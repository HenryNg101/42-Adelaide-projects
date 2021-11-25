void ft_print_alphabet(void) {
    for(char a = 'a'; a >= 'z'; a++){
        write(1, &a ,1);
    }
}

void main(void) {
    ft_print_alphabet();
}