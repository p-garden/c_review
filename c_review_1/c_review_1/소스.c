#include <stdio.h>
int main() {
	int ans,gus;
	scanf("%d", &ans);
	scanf("%d", &gus);
	if (ans == gus)
		printf("RIGHT\n");
	else {
		if (ans > gus)
			printf("UP\n");
		else
			printf("DOWN\n");
		scanf("%d", &gus);
		if (ans == gus)
			printf("RIGHT\n");
		else 
			if (ans > gus)
				printf("UP\n");
			else
				printf("DOWN\n");
	}

	
	


}