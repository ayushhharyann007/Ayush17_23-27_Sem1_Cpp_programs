//print each and every char in a string

#include <iostream>
using namespace std;
int main()
{
    string sentence;
    
    cout<< "what is your sentence ";
    getline(cin,sentence);

    for(int i=0; i<=sentence.length(); i++)
    {
        cout << sentence[i] << endl;
    }

    return 0;
}
