#include <stdio.h>
#include <stdlib.h>

int add3(int num);

int main(void)
{
	int num ,results ;
	for (num=2;num<=100;num++)
	{
		if (num%2==0)results =add3(num);
		
	}
	printf("2+4+6+~+100¥[Á`:%d\n",results);
	system("pause");
return 0;	
}


int add3 (int i){
static int sum =0;
sum+=i;
return sum;	
} 
