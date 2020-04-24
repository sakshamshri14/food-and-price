#include<stdio.h>
main()
{
	int a;
scanf("%d", &a);
switch (a)
{
	case 1: printf("food item - sandwich\n");
	printf("price - rs 149");
	break;
	case 2: printf("food item - french freies\n");
	printf("price - rs 99");
	break;
	case 3: printf("food item - pasta\n");
	printf("price - rs 179");
	break;
	case 4: printf("food item - burger\n");
	printf("price - rs 129");
	break;
	case 5: printf("food item - pizza\n");
	printf("price - rs 239");
	break;
	default: printf("so, you choosen the default case");
}
return 0;

}
