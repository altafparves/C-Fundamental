#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *next;
};

Node *head = nullptr;

// Function to insert at the front
void insertFront(char data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to insert at the rear
void insertRear(char data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertMiddle(Node *beforeNode, char data)
{
    if (beforeNode == nullptr)
        return;

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = beforeNode->next;
    beforeNode->next = newNode;
}

void displayList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << "" << endl;
}

string linkedListToString()
{
    string result = "";
    Node *temp = head;
    while (temp != nullptr)
    {
        result += temp->data;
        temp = temp->next;
    }
    return result;
}

string syllabify(const string &word)
{
    string result = "";
    for (size_t i = 0; i < word.length(); i++)
    {
        result += word[i];
        if (i % 3 == 1 && i != word.length() - 1)
        {
            result += '-';
        }
    }
    return result;
}

int main()
{
    // Start inserting
    insertRear('M');
    displayList();

    insertFront('I');
    displayList();

    // Reference to middle
    Node *middle = head;

    insertMiddle(middle, 'L');
    displayList();

    insertMiddle(middle->next, 'H');
    displayList();

    insertMiddle(middle->next->next, 'A');
    displayList();

    string word = linkedListToString();
    string syllabifiedWord = syllabify(word);
    cout << "Syllabified Output: " << syllabifiedWord << endl;
    return 0;
}
