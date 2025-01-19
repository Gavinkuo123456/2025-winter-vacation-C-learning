#include <iostream>
#include <cmath>

using namespace std;

class book
{
public:
    string title;
    int pages;
    book(string atitle, int apages)
    {
        title = atitle;
        pages = apages;
    }

    bool bigbook(){
        if(pages >=1000){
            return true;
        }
        return false;
    }
};
int main()
{
    int grade = 100;
    string name = "gavin";
    char level = 'A';
    int *paddress = &grade;
    cout << *paddress << endl;

    book math("engine math", 1029);
    cout << math.title << endl;
    cout << math.pages << endl;
    cout << math.bigbook() << endl;
}