#include<stdlib.h>
#include<stdio.h>
int choice;
char character;



struct Node{
char info;
struct Node *link;
};

void display(struct Node *start);
struct Node *head = NULL;
struct Node *temp = NULL;



void addatend(char character, struct Node *list){
        struct Node *temp, *p;
        p = (struct Node *)malloc(sizeof(struct Node));
        temp =(struct Node *)malloc(sizeof(struct Node));
        p->info = character;
        p->link = NULL;
        while(list->link != NULL)
        {
         list = list->link;
        }

        list->link = p;

        //if(p->link == NULL){

        //}
        //while(p->link!=NULL)
        //{
        //  p = p->link;
        //}
        //p->link=temp;
        //temp->link = NULL;

}

print(){
while(list->link != NULL)
{
    printf("")
}
}




char input(){
    printf("\nEnter character: \n");
    scanf("%c", &character);
    print();
    system("pause");
    return character;

}

newll(){
head =(struct Node *)malloc(sizeof(struct Node));
head->link= NULL;
input();
head->info = character;
print();



}

int main(){
    newll();
    while(1){
    int i;
    for(i = 0; i<6; i++){
    input();
    struct node *start = NULL;
    addatend(character, head);
    }
    }
    return 0;
}
