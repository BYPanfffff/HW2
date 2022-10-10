#include <stdio.h>
#include <stdlib.h>

int main()
{
int payCode;

	double pay; 
	double totalPay = 0;

	int countManagers = 0;
	int countHourlyWorkers = 0;
	int countCommissionWorkers = 0;
	int countPieceworkers = 0;
	
	const int WEEKS_PER_YEAR = 52;
	double salary;

	const int HOURS_PER_WEEK_THRESHOLD = 40; // considered overtime if greater than this value
	const double OVERTIME_MULTIPLIER = 1.5; // time-and-a-half
	double hourlyRate;
	double hoursWorked;
	double overtimeHours;

	const double COMMISSION_BASE = 250;
	const double COMMISSION_MULTIPLIER = .057; // 5.7%
	double grossWeeklySales;

	double numberPieces;
	double wagePerPiece;
	
	do
	{
		puts("\n");
		puts("員工代號如下");
		puts("1. 經理");
		puts("2. 小時工");
		puts("3. 傭金");    
		puts("4. 計件工");
		printf("%s", "輸入員工代號 (以-1結束): ");
		scanf("%d", &payCode);

		switch (payCode)
		{
			// manager
			case 1:
				// reset variables
				pay = salary = 0;

				// prompt the user for necessary values
				puts("");
				puts("Manager selected.");
				printf("%s", "Enter the yearly salary: $");
				scanf("%lf", &salary);

				pay = salary / WEEKS_PER_YEAR;

				// output
				printf("Manager's weekly pay is $%.2lf", pay);

				countManagers++; // update count
				totalPay += pay; // increase running total for all inputs

				break;

			// hourly
			case 2:
				// reset variables
				pay = hourlyRate = hoursWorked = overtimeHours = 0;

				// prompt the user for necessary values
				puts("");
				puts("Hourly worker selected.");
				printf("%s", "Enter the hourly rate: $");
				scanf("%lf", &hourlyRate);
				printf("%s", "Enter the total hours worked: ");
				scanf("%lf", &hoursWorked);

				// if the employee worked more than the HOURS_PER_WEEK_THRESHOLD
				// we need to do some calculations to figure out how much overtime to pay
				if (hoursWorked > HOURS_PER_WEEK_THRESHOLD)
				{
					overtimeHours = hoursWorked - HOURS_PER_WEEK_THRESHOLD; // anything over the threshold
					hoursWorked = HOURS_PER_WEEK_THRESHOLD; // we know they are at least at the threshold
				}

				// the pay can be calculated with this one line
				pay = (hourlyRate * hoursWorked) + (hourlyRate * overtimeHours * OVERTIME_MULTIPLIER);

				// output
				printf("Worker's pay this week is $%.2lf", pay);

				countHourlyWorkers++; // update count
				totalPay += pay; // increase running total for all inputs

				break;

			// commission
			case 3:
				// reset variables
				pay = grossWeeklySales = 0;

				// prompt the user for necessary values
				puts("");
				puts("Commission worker selected.");
				printf("%s", "Enter the gross weekly sales: $");
				scanf("%lf", &grossWeeklySales);

				// the pay can be calculated with this one line
				pay = COMMISSION_BASE + (grossWeeklySales * COMMISSION_MULTIPLIER);

				// output
				printf("Worker's pay this week is $%.2lf", pay);

				countCommissionWorkers++; // update count
				totalPay += pay; // increase running total for all inputs

				break;

			// piecework
			case 4:
				// reset variables
				pay = numberPieces = wagePerPiece = 0;

				// prompt the user for necessary values
				puts("");
				puts("Pieceworker selected.");
				printf("%s", "Enter the number of pieces: ");
				scanf("%lf", &numberPieces);
				printf("%s", "Enter the wage per piece: $");
				scanf("%lf", &wagePerPiece);

				// the pay can be calculated with this one line
				pay = numberPieces * wagePerPiece;

				// output
				printf("Worker's pay this week is $%.2lf", pay);

				countPieceworkers++; // update count
				totalPay += pay; // increase running total for all inputs

				break;

			// exit the menu
			case -1:
				break;

			// input not recognized
			default:
				puts("Invalid pay code.");
				break;
		}
	}
	// loop until user chooses to end
	while(payCode != -1);

	puts("");
	printf("Number of Employees:\t\t\t\t%d\n",
			countManagers
			+ countHourlyWorkers
			+ countCommissionWorkers
			+ countPieceworkers
		);
	printf("Total number of managers paid:\t\t\t%d\n", countManagers);
	printf("Total number of hourly workers paid:\t\t%d\n", countHourlyWorkers);
	printf("Total number of commission workers paid:\t%d\n", countCommissionWorkers);
	printf("Total number of pieceworkers paid:\t\t%d\n", countPieceworkers);
	printf("Total value paid:\t\t\t$%.2lf\n", totalPay);
	system("pause");
	return 0;	
}
