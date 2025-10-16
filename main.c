#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
// hello, start=3, len=5

int	main()
{
	char *te = "hello";
	char *te2 = "mohmed";
	char	*me;
	me = ft_strjoin(te, te2);
	printf("%s\n",me);
	free(me);
}
