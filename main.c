/*MENU PROJECT IN C*/
#include <stdio.h>
#include <stdlib.h>
//Srikanth
struct menu
{
    char name[50];
} a;
int main()
{
    int s,ch,qty,i;
    float net=0;
    char p;
    printf("\n\n\tEnter your Name :");
    gets(a.name);
    system("cls");
    printf("\n---------------WELCOME to YUMMY SWEETS AND BAKERY!!---------------");
srikanth:
    printf("\n\n\t\tMENU" );
    printf("\n\n\t\t1.Cakes");
    printf("\n\t\t2.Brownie");
    printf("\n\t\t3.Pudding");
    printf("\n\t\t4.Donut");
    printf("\n\t\t5.Muffins");
    printf("\n\t\t6.Cupcakes" );
    printf("\n\t\t7.Puffs" );
    printf("\n\t\t8.Milkshakes" );
    printf("\n\t\t9.Juice" );
    printf("\n\t\t10.Refreshers" );
    printf("\n\n-----------------------------------------------------------------");
    printf("\n\nEnter your choice:");
    scanf("%d",&s);
    switch(s)
    {
    case 1:
        system("cls");
        printf("\n\n\t\tCAKE :" );
        printf("\n\t\t1.Yellow Butter cake          200Rs");
        printf("\n\t\t2.Pound cake                  200Rs");
        printf("\n\t\t3.Red Velvet cake             200Rs");
        printf("\n\t\t4.Chiffon cake                200Rs");
        printf("\n\t\t5.Devil's Food cake           200Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Yellow Butter cake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*200;
            break;
        case 2:
            printf("\nYou have selected Pound cake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*200;
            break;
        case 3:
            printf("\nYou have selected Red Velvet cake ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*200;
            break;
        case 4:
            printf("\nYou have selected Chiffon cake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*200;
            break;
        case 5:
            printf("\nYou have selected Devil's Food cake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*200;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 2:
        system("cls");
        printf("\n\n\t\tBROWNIE :" );
        printf("\n\t\t1.Choco Brownie               40Rs");
        printf("\n\t\t2.Walnut Brownie              50Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Choco Brownie");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*40;
            break;
        case 2:
            printf("\nYou have selected Walnut Brownie");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*50;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;

        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 3:
        system("cls");
        printf("\n\n\t\tPUDDING :" );
        printf("\n\t\t1.Chocolate Pudding          45Rs");
        printf("\n\t\t2.Strawberry Pudding         40Rs");
        printf("\n\t\t3.Black Forest Pudding       40Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Chocolate Pudding ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*45;
            break;
        case 2:
            printf("\nYou have selected Strawberry Pudding");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*40;
            break;
        case 3:
            printf("\nYou have selected Black Forest Pudding");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*40;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;

        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 4:
        system("cls");
        printf("\n\n\t\tDONUT :" );
        printf("\n\t\t1.Choco Donut                30Rs");
        printf("\n\t\t2.Strawberry Donut           30Rs");
        printf("\n\t\t3.Sugar Donut                30Rs");
        printf("\n\t\t4.Coffee Crumble Donut       30Rs");
        printf("\n\t\t5.Cookie & Cream Donut       30Rs");
        printf("\n\t\t6.Almond Chip Donut          30Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Choco Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 2:
            printf("\nYou have selected Strawberry Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 3:
            printf("\nYou have selected Sugar Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 4:
            printf("\nYou have selected Coffee Crumble Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 5:
            printf("\nYou have selected Cookie & Cream Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 6:
            printf("\nYou have selected Almond Chip Donut");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 5:
        system("cls");
        printf("\n\n\t\tMUFFINS :" );
        printf("\n\t\t1.Choco Muffins              35Rs");
        printf("\n\t\t2.Strawberry Muffins         35Rs");
        printf("\n\t\t3.Blueberry Muffins          35Rs");
        printf("\n\t\t4.Walnut Muffins             35Rs");
        printf("\n\t\t5.Almond Muffins             35Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Choco Muffins ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        case 2:
            printf("\nYou have selected Strawberry Muffins");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        case 3:
            printf("\nYou have selected Blueberry Muffins");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        case 4:
            printf("\nYou have selected Coffee Walnut Muffins");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        case 5:
            printf("\nYou have selected Almond Muffins");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 6:
        system("cls");
        printf("\n\n\t\tCUP CAKES :" );
        printf("\n\t\t1.Red Velvet Cup Cakes       70Rs");
        printf("\n\t\t2.Strawberry Cup Cakes       70Rs");
        printf("\n\t\t3.Chocolate Cup Cakes        70Rs");
        printf("\n\t\t4.Vanilla Cup Cakes          70Rs");
        printf("\n\t\t5.Mango Cup Cakes            70Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Red Velvet Cup Cakes ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*70;
            break;
        case 2:
            printf("\nYou have selected Strawberry Cup Cakes");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*70;
            break;
        case 3:
            printf("\nYou have selected Chocolate Cup Cakes ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*70;
            break;
        case 4:
            printf("\nYou have selected Vanilla Cup Cakes");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*70;
            break;
        case 5:
            printf("\nYou have selected Mango Cup Cakes");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*70;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 7:
        system("cls");
        printf("\n\n\t\tPUFFS :" );
        printf("\n\t\t1.Veg.Puff                   30Rs");
        printf("\n\t\t2.Paneer.Puff                35Rs");
        printf("\n\t\t3.Chicken.Puff               40Rs");
        printf("\n\t\t4.Egg.Puff                   35Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Veg.Puff  ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*30;
            break;
        case 2:
            printf("\nYou have selected Paneer.Puff");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        case 3:
            printf("\nYou have selected Chicken.Puff");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*40;
            break;
        case 4:
            printf("\nYou have selected Egg.Puff ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*35;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 8:
        system("cls");
        printf("\n\n\t\tMILKSHAKES :" );
        printf("\n\t\t1.Oreo Go Nuts Milkshake     80Rs");
        printf("\n\t\t2.The Big Apple Milkshake    80Rs");
        printf("\n\t\t3.Coffee Brownie Milkshake   80Rs");
        printf("\n\t\t4.Caramel Nuts Milkshake     80Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Oreo Go Nuts Milkshake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 2:
            printf("\nYou have selected The Big Apple Milkshake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 3:
            printf("\nYou have selected Coffee Brownie Milkshake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 4:
            printf("\nYou have selected Caramel Nuts Milkshake");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 9:
        system("cls");
        printf("\n\n\t\tJUICES :" );
        printf("\n\t\t1.Lemon Juice                80Rs");
        printf("\n\t\t2.Apple Juice                80Rs");
        printf("\n\t\t3.Orange Juice               80Rs");
        printf("\n\t\t4.Grape Juice                80Rs");
        printf("\n\t\t5.Pineapple Juice            80Rs");
        printf("\n\t\t6.Pomegranate Juice          80Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Lemon Juice");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 2:
            printf("\nYou have selected Apple Juice");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 3:
            printf("\nYou have selected Orange Juice");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 4:
            printf("\nYou have selected Grape Juice");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
            break;
        case 5:
            printf("\nYou have selected Pineapple Juice ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
        case 6:
            printf("\nYou have selected Pomegranate Juice ");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*80;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    case 10:
        system("cls");
        printf("\n\n\t\tREFRESHERS :" );
        printf("\n\t\t1.Coffee                     15Rs");
        printf("\n\t\t2.Tea                        10Rs");
        printf("\n\t\t3.Cold Coffee                25Rs");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nYou have selected Coffee");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*15;
            break;
        case 2:
            printf("\nYou have selected Tea");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*10;
            break;
        case 3:
            printf("\nYou have selected Cold Coffee");
            printf("\nEnter the quantity:");
            scanf("%d",&qty);
            net+=qty*25;
            break;
        default:
            printf("\nInvalid");
            system("cls");
            goto srikanth;
            break;
        }
        fflush(stdin);
        printf("\nTo continue press 1:");
        scanf("%d",&i);
        if (i==1)
        {
            system("cls");
            goto srikanth;
        }
        fflush(stdin);
        printf("\nIf Parcel, Press p:");
        scanf("%c",&p);
        if (p=='p'||p=='P')
        {
            printf("\nTotal:%0.2f",net+20);
            printf("\nThank you %s Please come again",a.name);
        }
        else
        {
            printf("\nTotal:%0.2f",net);
            printf("\nThank you %s Please come again",a.name);
        }
        break;
    default:
        printf("\nInvalid");
        system("cls");
        goto srikanth;
        break;
    }
    return 0;
}//Srikanth
