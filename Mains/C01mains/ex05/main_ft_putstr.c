void ft_putstr(char *str);

int main(void)
{
	char str[5];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';

	ft_putstr(&str[0]);
}

