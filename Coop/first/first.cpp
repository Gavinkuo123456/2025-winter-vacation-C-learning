#include <iostream>
using namespace std;
using std::string;

class Abstractemployee
{ // Abstract
    virtual void AskForPromotion() = 0;
};
class employee : Abstractemployee
{

protected:
    string Name;
    string Company;
    int Age;

public:
    void intro()
    {
        cout << "Name-" << Name << endl;
        cout << "company-" << Company << endl;
        cout << "Age-" << Age << endl;
    }

    void setname(string name)
    {
        Name = name;
    }

    string getname()
    {
        return Name;
    }

    void setcompany(string company)
    {
        Company = company;
    }

    string getcompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }

    int getage()
    {
        return Age;
    }

    employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion()    
    {
        if (Age > 30)
        {
            cout << Name << " promoted" << endl;
        }
        else
        {
            cout << "denined" << endl;
        }
    }

    virtual void work(){
        cout<<Name<<" is doing misc work"<<endl; 
    }
};

class developers :public employee // Inheritance
{
private:
    string Code;

public:
    developers(string name, string company, int age, string code) : employee(name, company, age)
    {
        Code = code;
    }

    void fixbug()
    {
        cout << "best language: " << Code << endl;
    }

    void work(){
        cout<<Name<<"is coding"<<endl; 
    }
};

int main()
{
    employee one = employee("gavin", "copper", 20);
    one.intro();

    one.setAge(35);
    cout << one.getname() << endl;
    one.AskForPromotion();

    developers two = developers("captain", "YT", 21, "arduino");
    two.fixbug();

    one.work();
    two.work();
    
    employee* e1 = &two;
    e1->work();
}