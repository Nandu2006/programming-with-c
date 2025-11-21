#include<stdio.h>
int main()
{
	int day_num;
	scanf("%d",&day_num);
	switch(day_num)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
		    printf("Tuesday\n");
		    break;
		case 3:
		    printf("Wednesday\n");
		    break;
		case 4:
		    printf("Thursday\n");
		    break;
		case 5:
		    printf("Friday\n");
		    break;
		case 6:
		    printf("Saturday\n");
		    break;
		case 7:
		    printf("Sunday\n");
			break;
		default:
			printf("Enter a valid number of days(1-7)\n");
			break;						
	}
	printf("Task completed");
	return 0;
}
