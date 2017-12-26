#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;

int main()
{
    string letter;
    int count = 0;
    int max_dup = 0;
    int i = 0;
    int j = 0;
    int button = 1;
    int max_button = 1;
    int counter = 0;
    
    cout << "Please enter a letter: ";
    cin >> letter;
    
    cout << "[ ";
    for(i=0;i<letter.size();i++)
    {
         
        if(letter[1] == letter[0] && letter[i] == letter[i-1] && i > 0 && button != 0)
        {
            button++;
            if (max_button < button)
            {
                max_button = button;
            }
        }
        else if(letter[i] != letter[i-1] && i > 0)
        {
            button=0;
        }
        
        if(letter[j] != letter[i] && letter[max_button - 1] == letter[i] && j == max_button)
        {
            j=max_button;
        }
        else if(letter[j] != letter[i])
        {
            j=0;
        }
        else if(letter[j] == letter[i] && i != 0)
        {
            j++;
            counter=0;
        }
        
        cout << j <<" ";
    }
    cout << "]";
    cout << "button: " << max_button;
    return 0;
}