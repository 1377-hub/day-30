#include <stdio.h>
int main()
{
int a,b,c,sum,k;
float average;
printf("Enter three marks");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
average=sum/3;
k=average/10;
switch(k)
{
	case 10:
		case 9:
			case 8:
              case 7:
					printf(" Your grade is A");
					break;
				case 6:
					printf("Your grade is B");
					break;
				case 5:
					printf("Your grade is C");
					break;
				case 4:
					printf("Your grade is D");
					break;
				case 3:
					printf("Your grade is F");
					break;
				default:
					printf("INVALID ENTRY");
}
return 0;
} 