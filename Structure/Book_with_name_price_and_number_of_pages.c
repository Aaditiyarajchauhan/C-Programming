#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[40];
        float price;
        int number_of_pages;
    } a,b,c ;

    printf("Enter the name , price and it's number of pages of Book 1 : \n");
    scanf("%s %f %d",&a.name,&a.price,&a.number_of_pages);
    
    printf("Enter the name , price and it's number of pages of Book 2 : \n");
    scanf("%s %f %d",&b.name,&b.price,&b.number_of_pages);

    printf("Enter the name , price and it's number of pages of Book 3 : \n");
    scanf("%s %f %d",&c.name,&c.price,&c.number_of_pages);

    printf("---Book 1---\n");
    printf("Name: %s\n",a.name);
    printf("Price: %f\n",a.price);
    printf("Number of pages: %d\n\n",a.number_of_pages);

    printf("---Book 2---\n");
    printf("Name: %s\n",b.name);
    printf("Price: %f\n",b.price);
    printf("Number of pages: %d\n\n",b.number_of_pages);

    printf("---Book 3---\n");
    printf("Name: %s\n",c.name);
    printf("Price: %f\n",c.price);
    printf("Number of pages: %d\n\n",c.number_of_pages);

    return 0;
}