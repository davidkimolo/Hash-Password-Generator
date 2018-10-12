//Random Password Generator from a String Bits
// David Kimolo
// www.davidkimolo.com

/*Include the libraries needed*/

#include <iostream> // for input and output
#include <bits/stdc++.h> // To enable conversion of strings to characters
#include <ctime> // tTo enable use of the random function using time

using namespace std;

// Global Variables

string Hash_Entry = "9c6a362fceab56f9281acefe8a1596ccaaa36f7f8ffa10fdec697a9629fccc3e"; // Any Hash string or String
wchar_t Modular; // The number we will use to set random seed
int long  Length  = Hash_Entry.length(); // If you want a shorter or longer password you can define it here
int i = 0;


int main ()
{
    srand(time(NULL));
    char Password[Length+1];


    for (int i = 0; i<Length; ++i)
    {
        Modular += Hash_Entry[i];
    }

    int Final_Seed = Modular/1/97; // This makes the result more random

    /*Converting THe Hash_Entry to Characters
     * then using that to randomize the result*/

    strcpy(Password, Hash_Entry.c_str());

    while (i<Length)
    {
        int Randomizer = rand()%Final_Seed;
        Password[i] = Hash_Entry[Randomizer];

        i++;
    }

    for (int i = 0; i<Length; ++i) {

        cout << Password[i];
    }
    return 0;
    //End of the Program
}

