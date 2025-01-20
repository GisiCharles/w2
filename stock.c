#include <stdio.h>

int main()
{
    double stock[] ={45,60,49,10,56,78,90,100,21,56};

    for ( i = 0; i < sizeof(stock)/sizeof(stock[0]); i++)
    {
        printf("Product:%d.2lf\n",stock[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    // Initialize the stock array with quantities for 5 products
    int stock[] = {10, 50, 30, 15, 25};
    int totalStock = 0;
    int numProducts = sizeof(stock) / sizeof(stock[0]);
    float averageStock;

    // Display the stock quantities
    printf("Stock quantities of products:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d: %d\n", i + 1, stock[i]);
    }

    // Calculate the total stock
    for (int i = 0; i < numProducts; i++) {
        totalStock += stock[i];
    }

    // Calculate the average stock
    averageStock = (float)totalStock / numProducts;

    // Display the total and average stock
    printf("\nTotal stock: %d\n", totalStock);
    printf("Average stock quantity: %.2f\n", averageStock);

    return 0;
}
