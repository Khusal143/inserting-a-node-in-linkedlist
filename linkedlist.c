 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    struct node
    {
        /* data */
        int data;
        struct node *next;

    };
    struct node *temp , *head , *newnode;
    int choice;
    head = 0;
    while (choice)
    {
      newnode = (struct node*)malloc(sizeof(struct node));
      printf("enter data : ");
      scanf("%d ",&newnode->data);
      newnode->next = 0;
      if(head == 0)
    {
        head = temp = newnode ;
    }
    else{
        temp->next = newnode;
        temp = newnode;

    }
    printf("do you want to continue(0,1) ");
    scanf("%d",&choice);

    }
  
    temp = head;
    while (temp!=0)
    {
        
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("\n");

    
 }
