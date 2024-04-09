#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef struct ingdstr
{
    string a;
} ingd;

typedef struct food
{
    string name;
    char category;
    string recipe;
    ingd arr[25];
    int taste;
    int type;
    food *next;
} dish;

typedef struct Link
{
    dish *next;
} link;

link storage[26];


