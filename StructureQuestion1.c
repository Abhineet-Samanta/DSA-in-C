#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char Book_name[100];
        float price;
        int number_of_pages;
    };
    struct book book1;
    printf("Enter book name:-");
    gets(book1.Book_name);
    printf("Enter book price :-");
     scanf(" %f", &book1.price);
    printf("Enter number of pages of book :-");
    scanf("    %d", &book1.number_of_pages);
    struct book book2;
    strcpy(book2.Book_name, "World war 2 ");
    printf("Enter price of world war 2 book:-");
    scanf("     %f", &book2.price);
    printf("Enter number of pages of world war 2 book:-");
    scanf("%d", &book2.number_of_pages);
    printf("book name:-");
    puts(book1.Book_name);
    printf("book price:-%0.2f\n", book1.price);
    printf("number of page of book:-%d\n", book1.number_of_pages)
    ;printf("book name :-\n %s \n", book2.Book_name);
    printf("book price:-%0.2f\n", book2.price);
    printf("number of page of book:-%d\n", book2.number_of_pages);
    return 0;
}