void ft_is_negative(int n){
    char result = (n >= 0) ? 'P' : 'N';
    write(1, &result, 1);
}

void main(void) {
    ft_is_negative(100);
    ft_is_negative(-100);
}