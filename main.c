#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char *te = "";
	char *te2 = "be";
	char	*me;
	me = ft_strjoin(te, te2);
	printf("%s",me);
	free(me);
	
}
