//#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../srcs/ft_h.c"
#include "../srcs/get_nbr_in_dict.c"

#define BUF_SIZE 4096

int	main(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	int		pos;
	char	to_find[] = "1000000";
	char	*word;

	int		word_len;

	fd = open("test_numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}

	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';

	/* Get position of word in dict*/
	pos = ft_get_nbr_position(buf, to_find);

	/* Find word length */
	word_len = ft_find_word_len(buf, pos);

	/* Get the word from the dict line */
	word = ft_get_final_word(buf, pos, word_len);

	/* Trim word */
	ft_trim_final_word(word);
	printf("%s\n", word);

	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
