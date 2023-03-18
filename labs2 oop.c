//
// Created by Dule on 3/15/2023.
//
#include <stdio.h>
#include <string.h>

typedef struct Item {
    char name[100];
    int cena;


}Item;
typedef struct SoppingCart{
    int id;
    Item items[100];
    int Num;

}ShoppingCart;
void printAveragePriceOfLowestItems(ShoppingCart *carts, int n){
    int sum =0;
    for(int i = 0; i < n; i++) {
        int lowest = 999;
        for (int j = 0; j < carts[i].Num; j++) {
            Item item = *(carts[i].items + j);
            if(item.cena < lowest){
                lowest = item.cena;
            }
        }
        sum += lowest;
    }

    printf("Average: %.2f\n", (float)sum/n);
}

int main(){
    int n;
    ShoppingCart cart[100];


    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &cart[i].id, &cart[i].Num);

        for (int j = 0; j < n; j++) {
            //scanf("%s %d",&cart[i].items->name,&cart[i].items->cena);
            getchar();
            fgets(cart[i].items[j].name, sizeof(cart[i].items[j].name), stdin);
            cart[i].items[j].name[strlen(cart[i].items[j].name) - 1] = '\0';
            fgets(cart[i].items[j].name, sizeof(cart[i].items[j].name), stdin);
            cart[i].items[j].name[strlen(cart[i].items[j].name) - 1] = '\0';
            scanf("%d", &cart[i].items[j].cena);

        }
    }
    printAveragePriceOfLowestItems(cart,n);
}