#include <stdio.h>

int main()
{
    int productNo = 0;
    double price = 0;
    int quantitySold = 0;
    double totalValue = 0;

    printf("Product Price List:\n");
    printf("1: $2.98\n");
    printf("2: $4.50\n");
    printf("3: $9.98\n");
    printf("4: $4.49\n");
    printf("5: $6.87\n\n");

    printf("Enter product number (1-5) and quantity sold (enter 0 for product number to finish):\n");

    while (1)
    {
        printf("Product Number: ");
        scanf("%d", &productNo);

        if (productNo == 0)
        {
            break;
        }

        printf("Quantity Sold: ");
        scanf("%d", &quantitySold);

        switch (productNo)
        {
        case 1:
            price = 2.98;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 9.98;
            break;
        case 4:
            price = 4.49;
            break;
        case 5:
            price = 6.87;
            break;
        default:
            printf("Invalid product number. Please enter a number between 1 and 5.\n\n");
            continue;
        }

        double product_total_value = price * quantitySold;
        totalValue += product_total_value;

        printf("For Product No %d, the retail price is $%.2f. The total value of %d sold items is: $%.2f\n\n",
               productNo, price, quantitySold, product_total_value);
    }

    printf("Total retail value of all products sold last week: $%.2f\n", totalValue);

    return 0;
}
// #include<stdio.h>
// int main()
// {
//         int productNo=0;
//         double price=0;
//         int quantitySold=0;
//         double totalValue=0;

//         printf("Product Price:\n");
//         printf("1:$2.98\n");
//         printf("2:$4.50\n");
//         printf("1:$9.98\n");
//         printf("1:$4.49\n");
//         printf("1:$6.87\n");

//         printf("Enter product number (1-5) and quantity sold (enter 0 to finish):");

//     while(1)
//     {
//             printf("Product Number: ");
//             scanf("%d",&productNo);

//                 if (productNo ==0)
//                 {
//                 break;
//                 }

//             printf("quantity sold %d\n");
//             scanf("%d",&quantitySold);
//         switch (productNo)
//         {
//         case 1 :
//         price =2.98;
//         break;

//         case 2 :
//         price =4.58;
//         break;

//         case 3 :
//         price =9.98;
//         break;

//         case 4:
//         price =4.49;
//         break;

//         case 5:
//         price= 6.87;
//         break;

//         default:
//         printf("enter a number (1-5)");
//         continue;
//         }

//         double product_total_value = productNo* quantitySold;
//         totalValue=+product_total_value;

//         printf("For Product No %d,the retail price is%.2f.The totals value of %d sold items is :%.2f", productNo,price,quantitySold,product_total_value);

//     }
//     printf("Total retail value of all product sold last week :%d",totalValue);
//     return 0;
// }