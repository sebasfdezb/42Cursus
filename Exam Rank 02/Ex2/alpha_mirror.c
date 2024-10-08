#include <unistd.h>

void alpha(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('a' + 'z') - str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = ('A' + 'Z') - str[i];
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}