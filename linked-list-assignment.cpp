#include <iostream>
#include <string>

using namespace std;

struct Node
{
    char data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertEnd(char new_data)
    {
        Node *new_node = new Node{new_data, nullptr};
        if (head == nullptr)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertBeginning(char new_data)
    {
        Node *new_node = new Node{new_data, head};
        head = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;
    string input = "MIALH";
    bool insertFromEnd = true;
    int beginIndex = 0;
    int endIndex = input.length() - 1;

    while (beginIndex <= endIndex)
    {
        if (insertFromEnd)
        {
            list.insertEnd(input[endIndex]);
            endIndex--;
        }
        else
        {
            list.insertBeginning(input[beginIndex]);
            beginIndex++;
        }
        insertFromEnd = !insertFromEnd;
    }

    // To get the desired order we need to reverse the order of insertion
    LinkedList list2;
    insertFromEnd = true;
    beginIndex = 0;
    endIndex = input.length() - 1;

    while (beginIndex <= endIndex)
    {
        if (!insertFromEnd)
        {
            list2.insertEnd(input[endIndex]);
            endIndex--;
        }
        else
        {
            list2.insertBeginning(input[beginIndex]);
            beginIndex++;
        }
        insertFromEnd = !insertFromEnd;
    }

    cout << "Linked List: ";
    list2.display();

    return 0;
}