#include <stdio.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,l,t;
	int a[5] = {9, 5, 7,3,4};
	
	for(l = 0;l < 5; l++)
	{
		for(i=0;i<=4; i++)
		{
			if(a[i+1]<a[i])
			{
				t = a[i+1];
				a[i+1] = a[i];
				a[i] = t;	
			}
			for(j = 0;j < 5; j++)
			{
				printf("%d,",a[j]);
			}
			printf("\n");
	 	}
		 printf("\n");	
	}
	 
	return 0;	
}


