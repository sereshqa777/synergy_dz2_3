#include <stdio.h>

main()
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==1234)&&(pin2==4321))||((pin1==9876)&&(pin2==6789)))
	{
		printf("Login completed!");
	}
	else
	{
		printf("Login error!");
	}
	return 0;
}
