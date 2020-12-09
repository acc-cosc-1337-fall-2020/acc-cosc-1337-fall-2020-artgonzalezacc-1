//cpp
#include "arrays_char.h"

using std::cout;  using std::cin;

void use_char_array()
{
    const int SIZE = 4;
    char name[SIZE];// = {'J', 'o', 'h', 'n', '\0' };
    name[0] = 'j';
    name[1] = 'o';
    name[2] = 'e';
    name[3] = '\0';

    cout<<name<<"\n";

    for(int i=0; name[i]!= '\0';++i)
    {
        cout<<name[i]<<"\n";
    }
}

void use_dyn_char_array()
{
    const int SIZE = 10;
    char* name = new char[SIZE];

    cout<<"Enter name: ";
    cin.getline(name, SIZE);
    cout<<name<<"\n";

    delete[] name;

}