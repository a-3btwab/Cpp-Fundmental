/*=====================================================================*/
// tolower() === A~a
// toupper() === B~b
// islower() === is it lower
// isupper() === is it upper
// iaapace() === is it space - \n - \t -........
/*=====================================================================*/

#include <iostream>
#include <cctype>
#include <cctype>
using namespace std;

int main()
{

    string name = "AbDeLrAhMaN";
    int namesize = size(name);
    for (int i = 0; i < namesize; i++)
    {
        if (isupper(name[i]))

        {
            name[i] = tolower(name[i]);
        }
        else
        {
            name[i] = toupper(name[i]);
        }
    }
    cout << name;

    cout << "\n=========================================================================\n";

    string name2 = "Abd el rahman";
    string cleanname = "";
    int name2size = size(name2);
    for (int j = 0; j < name2size; j++)
    {
        if (isspace(name2[j]))
        {
            continue;
        }
        cleanname += name2[j];
    }
    cout << cleanname;
    return 0;
}