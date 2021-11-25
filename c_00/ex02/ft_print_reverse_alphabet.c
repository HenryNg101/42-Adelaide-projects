void ft_print_reverse_alphabet(){
    for(char a = 'z'; a >= 'a'; a--){
        write(1, &a ,1);
    }
}

void main(void) {
    ft_print_reverse_alphabet();
}