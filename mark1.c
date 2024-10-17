#include <stdio.h>
  int main() 
  { printf("Welcome to our water park \n");
    printf("Early 5 registrations are getting surprise gifts\n");
    printf("Hurry up!!\n");

    printf("Below are the packages. Please select any to check facilities:\n");
    printf("Package 1: 500 per person\n");
    printf("Package 2: 1000 per person\n");
    printf("Package 3: 1500 per person\n");

    int packageinfo;
   
    printf("Enter package number: ");
    scanf("%d", &packageinfo);
    
    if (packageinfo == 1) {
        printf("3 rides of water park and 1 of adventure park\n");
        printf("Only lockers available\n");
    } else if (packageinfo == 2) {
        printf("4 rides of water park and 2 rides of adventure park\n");
        printf("Rooms to stay\n");
    } else if (packageinfo == 3) {
        printf("Unlimited rides of water park and adventure park\n");
        printf("Rooms to stay\n");
        printf("Complementary food\n");
    } else {
        printf("Enter valid input\n");
        return 0; 
    }
    
    int number;
    printf("Enter the number of people: ");
    scanf("%d", &number);

    if (number >= 5) {
        printf("Congratulations! You are getting exciting surprise gifts!!!\n");
        for (int i = 0; i < 5; i++) {
            printf("Fill the details to register\n");
            char name[50];
            printf("Enter the name: ");
            scanf("%s", name);

            int age;
            printf("Enter age: ");
            scanf("%d", &age);

            printf("...%s successfully registered \n", name);
        }
    } else {
        for (int i = 0; i < number; i++) {
            printf("Fill the details to register\n");
            char name[50];
            printf("Enter the name: ");
            scanf("%s", name);

            int age;
            printf("Enter age: ");
            scanf("%d", &age);

            printf("...%s successfully registered \n", name);
        }
    }

    int packageno;
    printf("Select the package and check surprise gift: ");
    scanf("%d", &packageno);

    if (packageno == 1) {
        printf("Your group won a free entry pass of water park for your next visit\n");
    } else if (packageno == 2) {
        printf("Your group won a free entry pass of water park and adventure park\n");
    } else if (packageno == 3) {
        printf("Your group won a free entry pass of water park and adventure park. You can also add up to 3 new members in your group and have free passes\n");
    } else {
        printf("Enter valid input\n");
    }

    printf("Your group has successfully registered with the package number %d\n", packageno);
    return 0;
  }





                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     