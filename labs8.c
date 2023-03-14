//NEDORESENA
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct InvoiceItem {
    char idNumber[10];
    int sum;
    int price;
} InvoiceItem;

typedef struct Invoice {
    int idNumberOfInvoice;
    int NumberOfstavki;
    InvoiceItem* items; // dynamically allocated array
} Invoice;

typedef struct Client {
    char nameOfClient[100];
    int fakturi;
    Invoice* invoices; // dynamically allocated array
} Client;

int main() {
    Client a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        fgets(a[i].nameOfClient, sizeof(a[i].nameOfClient), stdin);
        scanf("%d", &a[i].fakturi);
        a[i].invoices = malloc(a[i].fakturi * sizeof(Invoice));
        for (int j = 0; j < a[i].fakturi; j++) {
            scanf("%d", &a[i].invoices[j].NumberOfstavki);
            a[i].invoices[j].items = malloc(a[i].invoices[j].NumberOfstavki * sizeof(InvoiceItem));
            for (int k = 0; k < a[i].invoices[j].NumberOfstavki; k++) {
                scanf("%s", a[i].invoices[j].items[k].idNumber);
                scanf("%d", &a[i].invoices[j].items[k].sum);
                scanf("%d", &a[i].invoices[j].items[k].price);
            }
            // read newline character to consume remaining input
            scanf("%*c");
        }
    }
    // free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].fakturi; j++) {
            free(a[i].invoices[j].items);
        }
        free(a[i].invoices);
    }
    return 0;
}