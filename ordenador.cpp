#include <stdio.h>
int n1,n2,n3;
int main ()
{
	printf("ingresa un numero\n");
	scanf("%d",&n1);
	printf("ingresa otro numero\n");
	scanf("%d",&n2);
	printf("ingresa otro numero\n");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3 && n2>n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n1);
		printf("%d\n",n2);
		printf("%d\n",n3);	
	}
	else if(n1>n2 && n1>n3 && n2<n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n1);
		printf("%d\n",n3);
		printf("%d\n",n2);	
	}
	else if(n2>n1 && n2>n3 && n1>n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d\n",n3);	
	}
	else if(n2>n1 && n2>n3 && n1<n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n2);
		printf("%d\n",n3);
		printf("%d\n",n1);		
	}
	else if(n3>n1 && n3>n2 && n1>n2)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n3);
		printf("%d\n",n1);
		printf("%d\n",n2);		
	}
	else if(n3>n1 && n3>n2 && n1<n2)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n3);
		printf("%d\n",n2);
		printf("%d\n",n1);		
	}
	else if(n1==n2 && n1==n3 && n2==n3)
	{
		printf("todos los numeros son iguales\n");
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d\n",n3);			
	}
		else if(n1==n2 && n2>n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n1);
		printf("%d\n",n2);
		printf("%d\n",n3);		
	}
	else if(n1==n2 && n2<n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n3);
		printf("%d\n",n2);
		printf("%d\n",n1);		
	}
	else if(n1>n2 && n1==n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n1);
		printf("%d\n",n3);
		printf("%d\n",n2);		
	}
	else if(n1<n2 && n1==n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d\n",n3);		
	}
	else if(n1<n2 && n2==n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n2);
		printf("%d\n",n3);
		printf("%d\n",n1);		
	}
	else if(n1>n2 && n2==n3)
	{
		printf("el orden de los numeros es el siguiente\n");
		printf("%d\n",n1);
		printf("%d\n",n2);
		printf("%d\n",n3);		
	}
else
{
	printf("error");
}
	return 0;
}
