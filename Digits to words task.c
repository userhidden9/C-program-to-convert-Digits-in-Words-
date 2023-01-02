#include<stdio.h>
int main() {
	int num, count, rem, rev = 0;
	printf("\nEnter number:\t");
	scanf_s("%d", &num);
	printf("\n");

	//number Validation
	while ((num < 1) || (num > 99999)) {
		printf(".....Invalid number entered.....\n");
		printf("Enter number:\t");
		scanf_s("%d", &num);
	}

	//count Digits
	for (count = 0; num != 0; count++) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	//Convert digits to words
	if (count == 5) {
		rem = rev % 10;
		rev /= 10;
		switch (rem) {
			case 1:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nTen thousand ");
						break;
					case 1:
						printf("\nEleven thousand ");
						break;
					case 2:
						printf("\nTwelve thousand ");
						break;
					case 3:
						printf("\nThieteen thousand ");
						break;
					case 4:
						printf("\nFourteen thousand ");
						break;
					case 5:
						printf("\nFifteen thousand ");
						break;
					case 6:
						printf("\nSixth thousand ");
						break;
					case 7:
						printf("\nSeventeen thousand ");
						break;
					case 8:
						printf("\nEighteen thousand ");
						break;
					case 9:
						printf("\nNinteen thousand ");
						break;
					default:
						break;
				}
				break;

			case 2:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nTwenty thousand ");
						break;
					case 1:
						printf("\nTwenty one thousand ");
						break;
					case 2:
						printf("\nTwenty two thousand ");
						break;
					case 3:
						printf("\nTwenty three thousand ");
						break;
					case 4:
						printf("\nTwenty four thousand ");
						break;
					case 5:
						printf("\nTwenty five thousand ");
						break;
					case 6:
						printf("\nTwenty six thousand ");
						break;
					case 7:
						printf("\nTwenty seven thousand ");
						break;
					case 8:
						printf("\nTwenty eight thousand ");
						break;
					case 9:
						printf("\nTwenty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 3:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nThirty thousand ");
						break;
					case 1:
						printf("\nThirty one thousand ");
						break;
					case 2:
						printf("\nThirty two thousand ");
						break;
					case 3:
						printf("\nThirty three thousand ");
						break;
					case 4:
						printf("\nThirty four thousand ");
						break;
					case 5:
						printf("\nThirty five thousand ");
						break;
					case 6:
						printf("\nThirty six thousand ");
						break;
					case 7:
						printf("\nThirty seven thousand ");
						break;
					case 8:
						printf("\nThirty eight thousand ");
						break;
					case 9:
						printf("\nThirty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 4:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nForty thousand ");
						break;
					case 1:
						printf("\nForty one thousand ");
						break;
					case 2:
						printf("\nForty two thousand ");
						break;
					case 3:
						printf("\nForty three thousand ");
						break;
					case 4:
						printf("\nForty four thousand ");
						break;
					case 5:
						printf("\nForty five thousand ");
						break;
					case 6:
						printf("\nForty six thousand ");
						break;
					case 7:
						printf("\nForty seven thousand ");
						break;
					case 8:
						printf("\nForty eight thousand ");
						break;
					case 9:
						printf("\nForty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 5:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nFifty thousand ");
						break;
					case 1:
						printf("\nFifty one thousand ");
						break;
					case 2:
						printf("\nFifty two thousand ");
						break;
					case 3:
						printf("\nFifty three thousand ");
						break;
					case 4:
						printf("\nFifty four thousand ");
						break;
					case 5:
						printf("\nFifty five thousand ");
						break;
					case 6:
						printf("\nFifty six thousand ");
						break;
					case 7:
						printf("\nFifty seven thousand ");
						break;
					case 8:
						printf("\nFifty eight thousand ");
						break;
					case 9:
						printf("\nFifty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 6:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nSixty thousand ");
						break;
					case 1:
						printf("\nSixty one thousand ");
						break;
					case 2:
						printf("\nSixty two thousand ");
						break;
					case 3:
						printf("\nSixty three thousand ");
						break;
					case 4:
						printf("\nSixty four thousand ");
						break;
					case 5:
						printf("\nSixty five thousand ");
						break;
					case 6:
						printf("\nSixty six thousand ");
						break;
					case 7:
						printf("\nSixty seven thousand ");
						break;
					case 8:
						printf("\nSixty eight thousand ");
						break;
					case 9:
						printf("\nSixty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 7:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nSeventy thousand ");
						break;
					case 1:
						printf("\nSeventy one thousand ");
						break;
					case 2:
						printf("\nSeventy two thousand ");
						break;
					case 3:
						printf("\nSeventy three thousand ");
						break;
					case 4:
						printf("\nSeventy four thousand ");
						break;
					case 5:
						printf("\nSeventy five thousand ");
						break;
					case 6:
						printf("\nSeventy six thousand ");
						break;
					case 7:
						printf("\nSeventy seven thousand ");
						break;
					case 8:
						printf("\nSeventy eight thousand ");
						break;
					case 9:
						printf("\nSeventy nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 8:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nEighty thousand ");
						break;
					case 1:
						printf("\nEighty one thousand ");
						break;
					case 2:
						printf("\nEighty two thousand ");
						break;
					case 3:
						printf("\nEighty three thousand ");
						break;
					case 4:
						printf("\nEighty four thousand ");
						break;
					case 5:
						printf("\nEighty five thousand ");
						break;
					case 6:
						printf("\nEighty six thousand ");
						break;
					case 7:
						printf("\nEighty seven thousand ");
						break;
					case 8:
						printf("\nEighty eight thousand ");
						break;
					case 9:
						printf("\nEighty nine thousand ");
						break;
					default:
						break;
				}
				break;

			case 9:
				rem = rev % 10;
				rev /= 10;
				switch (rem) {
					case 0:
						printf("\nNinty thousand ");
						break;
					case 1:
						printf("\nNinty one thousand ");
						break;
					case 2:
						printf("\nNinty two thousand ");
						break;
					case 3:
						printf("\nNinty three thousand ");
						break;
					case 4:
						printf("\nNinty four thousand ");
						break;
					case 5:
						printf("\nNinty five thousand ");
						break;
					case 6:
						printf("\nNinty six thousand ");
						break;
					case 7:
						printf("\nNinty seven thousand ");
						break;
					case 8:
						printf("\nNinty eight thousand ");
						break;
					case 9:
						printf("\nNinty nine thousand ");
						break;
					default:
						break;
				}
				break;
		}

	}

	if (count == 4) {
		rem = rev % 10;
		rev = rev / 10;
		switch (rem) {
			case 1:
				printf("one thousand ");
				break;
			case 2:
				printf("two thousand ");
				break;
			case 3:
				printf("three thousand ");
				break;
			case 4:
				printf("four thousand ");
				break;
			case 5:
				printf("five thousand ");
				break;
			case 6:
				printf("six thousand ");
				break;
			case 7:
				printf("seven thousand ");
				break;
			case 8:
				printf("eight thousand ");
				break;
			case 9:
				printf("nine thousand ");
				break;
			default:
				break;
		}
	}

	if (count == 5 || count == 4 || count == 3) {
		rem = rev % 10;
		rev = rev / 10;
		switch (rem) {
			case 1:
				printf("one hundred ");
				break;
			case 2:
				printf("two hundred ");
				break;
			case 3:
				printf("three hundred ");
				break;
			case 4:
				printf("four hundred ");
				break;
			case 5:
				printf("five hundred ");
				break;
			case 6:
				printf("six hundred ");
				break;
			case 7:
				printf("seven hundred ");
				break;
			case 8:
				printf("eight hundred ");
				break;
			case 9:
				printf("nine hundred ");
				break;
			default:
				break;
		}
	}

	if (count == 5 || count == 4 || count == 3 || count == 2) {
		rem = rev % 10;
		rev /= 10;
		switch (rem) {
			case 1:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf(" ten");
						break;
					case 1:
						printf(" eleven");
						break;
					case 2:
						printf(" twelve");
						break;
					case 3:
						printf(" thirteen");
						break;
					case 4:
						printf(" forteen");
						break;
					case 5:
						printf(" fifteen");
						break;
					case 6:
						printf(" sixteen");
						break;
					case 7:
						printf(" seventeen");
						break;
					case 8:
						printf(" eighteen");
						break;
					case 9:
						printf(" ninteen");
						break;
					default:
						break;
				}
				break;

			case 2:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("twenty");
						break;
					case 1:
						printf("twenty one");
						break;
					case 2:
						printf("twenty two");
						break;
					case 3:
						printf("twenty three");
						break;
					case 4:
						printf("twenty four");
						break;
					case 5:
						printf("twenty five");
						break;
					case 6:
						printf("twenty six");
						break;
					case 7:
						printf("twenty seven");
						break;
					case 8:
						printf("twenty eight");
						break;
					case 9:
						printf("twenty nine");
						break;
					default:
						break;
				}
				break;

			case 3:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("thirty");
						break;
					case 1:
						printf("thirty one");
						break;
					case 2:
						printf("thirty two");
						break;
					case 3:
						printf("thirty three");
						break;
					case 4:
						printf("thirty four");
						break;
					case 5:
						printf("thirty five");
						break;
					case 6:
						printf("thirty six");
						break;
					case 7:
						printf("thirty seven");
						break;
					case 8:
						printf("thirty eight");
						break;
					case 9:
						printf("thirty nine");
						break;
					default:
						break;
				}
				break;
			case 4:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("forty");
						break;
					case 1:
						printf("forty one");
						break;
					case 2:
						printf("forty two");
						break;
					case 3:
						printf("forty three");
						break;
					case 4:
						printf("forty four");
						break;
					case 5:
						printf("forty five");
						break;
					case 6:
						printf("forty six");
						break;
					case 7:
						printf("forty seven");
						break;
					case 8:
						printf("forty eight");
						break;
					case 9:
						printf("forty nine");
						break;
					default:
						break;
				}
				break;

			case 5:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("fifty");
						break;
					case 1:
						printf("fifty one");
						break;
					case 2:
						printf("fifty two");
						break;
					case 3:
						printf("fifty three");
						break;
					case 4:
						printf("fifty four");
						break;
					case 5:
						printf("fifty five");
						break;
					case 6:
						printf("fifty six");
						break;
					case 7:
						printf("fifty seven");
						break;
					case 8:
						printf("fifty eight");
						break;
					case 9:
						printf("fifty nine");
						break;
					default:
						break;
				}
				break;

			case 6:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("sixty");
						break;
					case 1:
						printf("sixty one");
						break;
					case 2:
						printf("sixty two");
						break;
					case 3:
						printf("sixty three");
						break;
					case 4:
						printf("sixty four");
						break;
					case 5:
						printf("sixty five");
						break;
					case 6:
						printf("sixty six");
						break;
					case 7:
						printf("sixty seven");
						break;
					case 8:
						printf("sixty eight");
						break;
					case 9:
						printf("sixty nine");
						break;
					default:
						break;
				}
				break;

			case 7:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("seventy");
						break;
					case 1:
						printf("seventy one");
						break;
					case 2:
						printf("seventy two");
						break;
					case 3:
						printf("seventy three");
						break;
					case 4:
						printf("seventy four");
						break;
					case 5:
						printf("seventy five");
						break;
					case 6:
						printf("seventy six");
						break;
					case 7:
						printf("seventy seven");
						break;
					case 8:
						printf("seventy eight");
						break;
					case 9:
						printf("seventy nine");
						break;
					default:
						break;
				}
				break;

			case 8:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("eighty");
						break;
					case 1:
						printf("eighty one");
						break;
					case 2:
						printf("eighty two");
						break;
					case 3:
						printf("eighty three");
						break;
					case 4:
						printf("eighty four");
						break;
					case 5:
						printf("eighty five");
						break;
					case 6:
						printf("eighty six");
						break;
					case 7:
						printf("eighty seven");
						break;
					case 8:
						printf("eighty eight");
						break;
					case 9:
						printf("eighty nine");
						break;
					default:
						break;
				}
				break;

			case 9:
				rem = rev % 10;
				switch (rem) {
					case 0:
						printf("ninty");
						break;
					case 1:
						printf("ninty one");
						break;
					case 2:
						printf("ninty two");
						break;
					case 3:
						printf("ninty three");
						break;
					case 4:
						printf("ninty four");
						break;
					case 5:
						printf("ninty five");
						break;
					case 6:
						printf("ninty six");
						break;
					case 7:
						printf("ninty seven");
						break;
					case 8:
						printf("ninty eight");
						break;
					case 9:
						printf("ninty nine");
						break;
					default:
						break;
				}
				break;
		}
	}

	if (count == 1) {
		switch (rem) {
			case 1:
				printf("one");
				break;
			case 2:
				printf("two");
				break;
			case 3:
				printf("three");
				break;
			case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;
			default:
				break;
		}
	}
}





