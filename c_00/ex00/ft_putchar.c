void ft_putchar(char c){
	write(1, &c, 1);
}

void main(void) {
	ft_putchar('a');
	return;	
}