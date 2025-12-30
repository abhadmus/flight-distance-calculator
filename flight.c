#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

void flightcalc (float km_distance) {

    /*calculation*/
    int f_hrs;
	float m_distance, i_hrs, f_mins, decimal_mins;

    m_distance = km_distance *  0.621371;
    i_hrs = m_distance / 529;
    f_hrs = i_hrs;
    f_mins = (i_hrs - f_hrs)*60;
    decimal_mins = f_mins - (int)f_mins;

    if (decimal_mins >= .5) {
        f_mins++;
    } else { }

    /*hour column*/
    if (f_hrs < 10) {
            printf("      %d      |", f_hrs);
    }
    else if (f_hrs < 100) {
            printf("     %d      |", f_hrs);
    }

    /*mins column*/
    if (f_mins < 10) {
            printf("       %d       |\n", (int)f_mins);
    }
    else if (f_mins < 100) {
            printf("      %d       |\n", (int)f_mins);
    }
}

int main() {

	int x;
	float l_distance, u_distance, s_distance, c_distance;

    printf("Enter the lower limit on distance in km: ");
    scanf("%f", &l_distance);

    printf("\nEnter the upper limit on distance in km: ");
    scanf("%f", &u_distance);

    printf("\nEnter the step size in km: ");
	scanf("%f", &s_distance);

    /*validity check*/
    if ((s_distance+l_distance) > u_distance || s_distance < 0 || l_distance < 0 || u_distance < 0) {
        printf("\nInvalid values given. Table cannot be generated.");
        exit(1);
    }

	/*first columns*/
	printf("\n===============================================\n");
	printf("| distance (km) |    hours    |    minutes    |\n");
	printf("|=============================================|\n");

    /*value columns*/
    c_distance = l_distance;
    for (x=0; c_distance < u_distance; x++) {

        /*distance column*/
        if (c_distance < 10) {
            printf("|      %.2f     |", c_distance);
        }
        else if (c_distance < 100) {
            printf("|     %.2f     |", c_distance);
        }
        else if (c_distance < 1000) {
            printf("|    %.2f     |", c_distance);
        }
        else if (c_distance < 10000) {
            printf("|   %.2f     |", c_distance);
        }
        else if (c_distance < 100000) {
            printf("|  %.2f     |", c_distance);
        }
        else if (c_distance < 1000000) {
            printf("| %.2f     |", c_distance);
        }
        else if (c_distance < 10000000) {
            printf("|%.2f     |", c_distance);
        }

        /*hrs & minutes column*/
        flightcalc(c_distance);

        c_distance = c_distance + s_distance;
    }

    /*closing column*/
    printf("===============================================");

	return 0;

}
