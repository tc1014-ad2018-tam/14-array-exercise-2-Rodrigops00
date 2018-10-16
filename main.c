//Rodrigo Perez Solis
//A01411278
//This program helps the user to introduce a lot of numbers and make sums, averages etc
#include <stdio.h>
float sum(int array[], int n) {
    float a = 0;
    for (int i = 0; i < n; i++) {
        a += array[i];
    }
    return a;
}

int main() {
// Variable Declaration
    int b;
    int c;
    int d;
    int selectedNumber;

    //Here we ask the user how many numbers he wants to enter.
    printf("How many numbers would you like to enter?\n");
    scanf("%i", &c);

    int array[c];
    printf("You will now enter %i numbers.\n", c);


    for (int i = 0; i < c; i++) {
        printf("please give me a number %i:\n", i + 1);
        scanf("%i", &b);
        array[i] = b;
    }

    // we show the user the menu and let him select an option
    printf("What would you like to do with these numbers?\n");
    printf("Press '1' to make the sum.\n");
    printf("Press '2' to calculate the average of your numbers.\n");
    printf("Press '3' to know the smallest number and where is stored\n");
    printf("Press '4' to know the biggest number and where is stored\n");
    scanf("%i", &d);

    // Switch helps us to declare the cases
    switch(d) {
        case 1: printf("The sum of the numbers is %.1f.", sum(array, c));//this case helps us to make the sum of the numbers
            break;
        case 2: printf("The average of the numbers is %.1f.", sum(array, c)/ (sizeof(array)/sizeof(array[0])));//Here we do the average
            break;
        case 3: selectedNumber = array[0]; //in this case we desplay the smallest value  and the cell where is stored
            for (int i = 0; i < c; i++) {
                if (array[i] < selectedNumber) {
                    selectedNumber = array[i];
                }
            }
            printf("The smallest number is %i.", selectedNumber);
            break;
        case 4: selectedNumber = array[0]; //here we display the biggest value and the cell wher is stored
            for (int i = 0; i < c; i++) {
                if (array[i] > selectedNumber) {
                    selectedNumber = array[i];
                }
            }
            printf("The biggest number is %i.", selectedNumber);
            break;
        default:
            printf("That is not available.");
    }

    return 0;
}