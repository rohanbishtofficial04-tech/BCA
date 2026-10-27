#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void add_at_beginning(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void add_at_end(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void delete_at_beginning()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
}

void delete_at_end()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void insert_at_position(int data, int position)
{
    if (position < 0)
    {
        printf("Invalid position!\n");
        return;
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    if (position == 0)
    {
        new_node->next = head;
        head = new_node;
        return;
    }
    struct Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        if (temp == NULL)
        {
            printf("Position out of bounds!\n");
            return;
        }
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int choice, data, position;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add data at the beginning of the list.\n");
        printf("2. Add data at the end of the list.\n");
        printf("3. Delete data at the beginning of the list.\n");
        printf("4. Delete data at the end of the list.\n");
        printf("5. Insert data at a position.\n");
        printf("6. Display the data.\n");
        printf("7. Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to add at the beginning: ");
            scanf("%d", &data);
            add_at_beginning(data);
            break;
        case 2:
            printf("Enter data to add at the end: ");
            scanf("%d", &data);
            add_at_end(data);
            break;
        case 3:
            delete_at_beginning();
            break;
        case 4:
            delete_at_end();
            break;
        case 5:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert at: ");
            scanf("%d", &position);
            insert_at_position(data, position);
            break;
        case 6:
            display();
            break;
        case 7:
            printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
