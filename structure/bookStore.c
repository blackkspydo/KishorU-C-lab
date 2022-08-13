#include<stdio.h>
#include<string.h>

struct BookFactory {
    char title[32];
    char author[32];
    float price;
    int page;
    char publication[16];
};

struct BookFactory input();
void output(struct BookFactory);


int main() {
    struct BookFactory books[3];
    for(int i =0; i<3;i++){
        printf("\n\nBook %d\n",i);
        books[i]=input();
    }
    for(int i =0; i<3;i++){
        printf("\n\nBook %d\n",i);
        output(books[i]);
    }
    return 0;
}

struct BookFactory input(){
    struct BookFactory book;
    printf("Enter the title of the book: ");
    gets(book.title);
    printf("Enter the author of the book: ");
    gets(book.author);
    printf("Enter the price of the book: ");
    scanf("%f",&book.price);
    printf("Enter the number of page in the book: ");
    scanf("%d",&book.page);
    getchar();
    printf("Enter the publication of the book: ");
    gets(book.publication);
    return book;
    
}

void output(struct BookFactory book){
    printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\nPage: %d\nPublication: %s",book.title,book.author,book.price,book.page,book.publication);
}