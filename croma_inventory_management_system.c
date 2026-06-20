//CROMA INVENTORY MANAGEMENT SYSTEM
//generate an invoice of different outlets and which include product id, product quantity,product mrp,product discount and product features. NOTE: this online / e-invoice system provides the feature to represent the whole stock.Also provide the functionality to add a single or more items.Once the requirement is done user can generate the e-receipt by own itself.
//HINT: each items and their other properties will store in an array of same size. 
//NOTE: CHECK WHETHER THE CHOICE USER HAS ENTERED IS VALID OR NOT
//add a menu(1. View Inventory Stock 2. Purchase Items 3. Checkout and Exit ) and enter choice
#include <stdio.h>
int main()
{
    int productId[5] = {101, 102, 103, 104, 105};
    int quantity[5] = {20, 15, 10, 25, 12};
    float mrp[5] = {50000, 30000, 1500, 2500, 4000};
    float discount[5] = {10, 15, 5, 8, 12};
    char features[5][50] = {"Laptop","Smartphone","Keyboard","Headphones","Smart Watch"};
    int choice;
    int cartId[20], cartQty[20];
    float cartAmount[20];
    int cartCount = 0;
    float grandTotal = 0;
    do
    {
        printf("----------------------------------------------------\n");
        printf("\n===== CROMA INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout and Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n----- INVENTORY STOCK -----\n");
                printf("ID\tFeature\t\tQty\tMRP\tDiscount\n");

                for(int i=0; i<5; i++)
                {
                    printf("%d\t%s\t%d\t%f\t%f%\n", productId[i],features[i], quantity[i], mrp[i],discount[i]);
                }
                break;
            }
            case 2:
            {
                int id, qty;
                char more;
                do
                {
                    printf("\nEnter Product ID: ");
                    scanf("%d", &id);
                    int found = -1;
                    for(int i=0; i<5; i++)
                    {
                        if(productId[i] == id)
                        {
                            found = i;
                            break;
                        }
                    }
                    if(found == -1)
                    {
                        printf("Invalid Product ID!\n");
                    }
                    else
                    {
                        printf("Available Quantity: %d\n", quantity[found]);
                        printf("Enter Quantity to Purchase: ");
                        scanf("%d", &qty);
                        if(qty <= 0 || qty > quantity[found])
                        {
                            printf("Invalid Quantity!\n");
                        }
                        else
                        {
                            float finalPrice =(mrp[found] - (mrp[found] * discount[found] / 100))  * qty; 
                            quantity[found] -= qty;
                            cartId[cartCount] = productId[found];
                            cartQty[cartCount] = qty;
                            cartAmount[cartCount] = finalPrice;
                            cartCount++;
                            grandTotal += finalPrice;
                            printf("Item Added Successfully!\n");
                        }
                    }
                    printf("Add More Items? (Y/N): ");
                    scanf(" %c", &more);
                }
                 while(more=='Y' || more=='y');
                break;
            }
            case 3:
            {
                printf("-------------------------------------\n");
                printf("\n========== E-INVOICE ==========\n");
                if(cartCount == 0)
                {
                    printf("No items purchased.\n");
                }
                else
                {
                    printf("Product ID\tQuantity\tAmount\n");
                    for(int i=0; i<cartCount; i++)
                    {
                        printf("%d\t\t%d\t\t%f\n", cartId[i],cartQty[i],cartAmount[i]);
                    }
                    printf("---------------------------------\n");
                    printf("Grand Total = %f\n", grandTotal);
                }
                printf("\nThank You For Shopping At CROMA!\n");
                printf("--------------------------------------\n");
                break;
            }
            default:
                printf("Invalid Choice! Please Enter 1, 2 or 3.\n");
        }
    } 
    while(choice != 3);
    return 0;
}