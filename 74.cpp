#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguse_Brazil");
	
	for(int a=1;a<=10;a++){
		printf("\nTabuada do %d\n\n",a);
			for(int i=1;i<=10;i++){
			
				int mult;
			
				mult=i*a;
			
				printf("%2d x %2d = %3d\n",a,i,mult);
			}
		printf("\n");
	}
	return 0;
}
