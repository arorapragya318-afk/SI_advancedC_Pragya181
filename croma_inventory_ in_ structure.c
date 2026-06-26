//convert the project which include array functionality into structure
#include <stdio.h>
struct Product
{
int productId;
int quantity;
float mrp;
float discount;
float amount;
char feature[50];
};
int main()
{
struct Product products[5] =
{
    {1001,20,40000,10,0,"Laptop"},
    {1002,15,90000,15,0,"Smartphone"},
    {1003,10,1000,5,0,"Television"},
    {1004,25,5600,8,0,"Mixer"},
    {1005,12,2500,12,0,"Smart Watch"}
};
struct Product cart[20];
int choice;
int cartCount = 0;
float grandTotal = 0;
do
{
printf("----------------------------------------------------\n");
printf("===== CROMA INVENTORY MANAGEMENT SYSTEM =====\n");
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
for(int i = 0; i < 5; i++)
{
printf("%d\t%s\t%d\t%f\t%f\n",products[i].productId,products[i].feature,products[i].quantity,products[i].mrp, products[i].discount);                       
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
for(int i = 0; i < 5; i++)
{
if(products[i].productId == id)
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
printf("Available Quantity: %d\n",
products[found].quantity);
printf("Enter Quantity to Purchase: ");
scanf("%d", &qty);
if(qty <= 0 || qty > products[found].quantity)
{
printf("Invalid Quantity!\n");
}
else
{
float finalPrice = (products[found].mrp -(products[found].mrp *products[found].discount / 100))* qty;
products[found].quantity -= qty;
cart[cartCount].productId =
products[found].productId;
cart[cartCount].quantity = qty;
cart[cartCount].amount = finalPrice;
cartCount++;
grandTotal += finalPrice;
printf("Item Added Successfully!\n");
}
 }
printf("Add More Items? (Y/N): ");
scanf(" %c", &more);
} 
while(more == 'Y' || more == 'y');
break;
}
case 3:
{
printf("-------------------------------------\n");
printf("========== E-INVOICE ==========\n");
if(cartCount == 0)
{
printf("No items purchased.\n");
}
else
{
printf("Product ID\tQuantity\tAmount\n");
for(int i = 0; i < cartCount; i++)
{
printf("%d\t\t%d\t\t%f\n",
cart[i].productId,
cart[i].quantity,
cart[i].amount);
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
