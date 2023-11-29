#include <stdio.h>

int main()
{

    char choice;

    printf("\t\t\t\t\t\t Welcome to liqour world \a\a\a\a\a\a \n\n");
   printf("do you want to drink type Y for yes and N for No \n ");
    scanf("%c", &choice);
    fflush(stdin);

    if (choice == 'Y' || choice == 'y'){

        printf("What kind of alcohol you are looking for \n");

        printf("Type S for Scotch \n");
        printf("Type V for Vodka \n");
        printf("Type B for Brandy  \n");
        printf("Type W for Wine  \n");
        scanf("%c", &choice);
        fflush(stdin);

        if (choice == 'S' || choice == 's')
        {
            printf("you have different type of scotch available \n");
            printf("Type C for Chivas regal \n");
            printf("Type B for Ballantines \n");
            printf("Type J for Johnnie walker \n");
            printf("Type D for Dewars \n");
            scanf("%c", &choice);
            fflush(stdin);

            if (choice == 'C' || choice == 'c')
            {
                printf("you choose Chivas Regal \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'B' || choice == 'b')
            {
                printf("you choose  Ballantines \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'J' || choice == 'j')
            {
                printf("you choose  Johinee wlaker \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'D' || choice == 'd')
            {
                printf("you choose  Dewars \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
        }

        //		2nd option start
        if (choice == 'V' || choice == 'v')
        {
            printf("you have different type of vodka available \n");
            printf("Type M for Magic Moment \n");
            printf("Type A for Absolut \n");
            printf("Type S for Smirnoff \n");
            printf("Type R for Romanov \n");
            scanf("%c", &choice);
            fflush(stdin);
            //		2nd option complete

            if (choice == 'M' || choice == 'm')
            {
                printf("you choose Magic Moment \n\n");
                printf(" would you like to add ice & Soft Drink\n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }

            if (choice == 'A' || choice == 'a')
            {
                printf("you choose  Absolut \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'S' || choice == 's')
            {
                printf("you choose  Smirnoff \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'R' || choice == 'r')
            {
                printf("you choose  Romanov \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
        }

        if (choice == 'B' || choice == 'b')

        {
            printf("you have different type of Brandy available \n");
            printf("Type M for Morpheus Xo  \n");
            printf("Type C for Clovis \n");
            printf("Type H for Honey Bee \n");
            printf("Type O for OLd Admiral \n");
            scanf("%c", &choice);
            fflush(stdin);

            if (choice == 'M' || choice == 'm')
            {
                printf("you choose Morpheus Xo \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'C' || choice == 'c')
            {
                printf("you choose Clovis \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'H' || choice == 'h')
            {
                printf("you choose Honey Bee \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
            if (choice == 'O' || choice == 'o')
            {
                printf("you choose Old Admiral  \n\n");
                printf("would you like to add ice & Soft drink \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
        }

        if (choice == 'W' || choice == 'w')
        {
            printf("you have different type of Wine available \n");
            printf("Type R for Red Wine \n");
            printf("Type C for Chandon \n");
            printf("Type S for Sula \n");
            printf("Type G for Grenaches Rose \n");
            scanf("%c", &choice);
            fflush(stdin);
            if (choice == 'R' || choice == 'r')
            {
                printf("you choose Red Wine \n\n");
                printf(" would you like to add ice & cold drink & Soda \n");
                printf("Type I for Ice \n");
                printf("Type S for Soft Drink \n");
                printf("Type B for Both \n");
                scanf("%c", &choice);
                fflush(stdin);

                if (choice == 'I' || choice == 'i')
                {
                    printf("you choose Ice \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'S' || choice == 's')
                {
                    printf("you choose Soft Drink \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
                else if (choice == 'B' || choice == 'b')
                {
                    printf("you choose Both \n\n");
                    printf("order confirm \n");
                    printf("Have a nice day \n");
                }
            }
        	if (choice == 'C' || choice == 'c')
        	{
            printf("you choose Chandon \n\n");
            printf(" would you like to add ice & cold drink & Soda \n");
            printf("Type I for Ice \n");
            printf("Type S for Soft Drink \n");
            printf("Type B for Both \n");
            scanf("%c", &choice);
            fflush(stdin);

            if (choice == 'I' || choice == 'i')
            {
                printf("you choose Ice \n\n");
                printf("order confirm \n");
                printf("Have a nice day \n");
            }
            else if (choice == 'S' || choice == 's')
            {
                printf("you choose Soft Drink \n\n");
                printf("order confirm \n");
                printf("Have a nice day \n");
            }
            else if (choice == 'B' || choice == 'b')
            {
                printf("you choose Both \n\n");
                printf("order confirm \n");
                printf("Have a nice day \n");
            }
    		}
    		if (choice == 'S' || choice == 's')
    		{
        printf("you choose Sula \n\n");
        printf(" would you like to add ice & cold drink & Soda \n");
        printf("Type I for Ice \n");
        printf("Type S for Soft Drink \n");
        printf("Type B for Both \n");
        scanf("%c", &choice);
        fflush(stdin);

        if (choice == 'I' || choice == 'i')
        {
            printf("you choose Ice \n\n");
            printf("order confirm \n");
            printf("Have a nice day \n");
        }
        else if (choice == 'S' || choice == 's')
        {
            printf("you choose Soft Drink \n\n");
            printf("order confirm \n");
            printf("Have a nice day \n");
        }
        else if (choice == 'B' || choice == 'b')
        {
            printf("you choose Both \n\n");
            printf("order confirm \n");
            printf("Have a nice day \n");
        }
    }
			}

			if (choice == 'G' || choice == 'g')
			{
    printf("you choose Grenachase Rose \n\n");
    printf(" would you like to add ice & cold drink & Soda \n");
    printf("Type I for Ice \n");
    printf("Type S for Soft Drink \n");
    printf("Type B for Both \n");
    scanf("%c", &choice);
    fflush(stdin);

    if (choice == 'I' || choice == 'i')
    {
        printf("you choose Ice \n\n");
        printf("order confirm \n");
        printf("Have a nice day \n");
    }
    else if (choice == 'S' || choice == 's')
    {
        printf("you choose Soft Drink \n\n");
        printf("order confirm \n");
        printf("Have a nice day \n");
    }
    else if (choice == 'B' || choice == 'b')
    {
        printf("you choose Both \n\n");
        printf("order confirm \n");
        printf("Have a nice day \n");
    }

	}
    } 

    else if (choice == 'N' || choice == 'n')
{
    printf("come back when you want to chill ");
}
}
