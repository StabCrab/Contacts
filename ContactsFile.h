//
// Created by trykr on 27.11.2019.
//

#ifndef UNILABS_CONTACTSFILE_H
#define UNILABS_CONTACTSFILE_H
#include <iostream>
using namespace std;
enum Groups
{
    NO_GROUP = 1,
    FAMILY = 2,
    FRIENDS = 3,
    COLLEAGUES = 4
};
struct Contact
{
    char name [80];
    char phone[12];
    int group;
};
typedef struct {
    Contact* data;
    size_t size;
} Book;

Book *CreateBook(size_t size);

Book *CreateNewBook();

void deleteBook(Book *book);

void reserve(Book *book, size_t newCap);

Contact getContactByName(Book *book, const char *name);

Contact getContactByPhone(Book *book, const char *phone);

int getIndex(Book *book, char* name);

size_t getSize(Book *v);

void CreateContact(Book *book);

void DeleteContact(Book *book, char* name);

void EditContact(Book *book, char* name);

void printPhone(Book *book, char* name);

void PrintContactByName(Book *book, char *name);

void PrintContactByPhone(Book *book, char *phone);

void Print (Book *book);

void Quit(Book *book);
#endif //UNILABS_CONTACTSFILE_H
