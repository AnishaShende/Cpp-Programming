#include <iostream>
using namespace std;

class hospital
{
public:
    char p_name[100], gender[20], problem[15], address[25];
    int date, month, yr;
    int age;
    long int num;
    int choice;

public:
    virtual void about() // virtual
    {
        cout << "____________________" << endl;
        cout << "\n HOSPITAL DETAIL:\n Address : Dongararh - Nagpur - RD, Sainath Nagar, Teachers Colony, Takiya Ward, Bhandara \n Awards - ISO-2022 \n Years Of Exeperience - 20" << endl;
        cout << "__________________ " << endl;
    }
    void display();
    void detail();
    void staffdetail();
    void insurance();
    static int objectcount;
};

void hospital::display()
{
    cout << ".................................................." << endl;
    cout << " \n FIVE DOCTORS ARE AVAILABLE IN LAKSH HOSPITAL \n 1. Dr. SUNITA  MESHRAM \n 2. Dr. KASHISH LANJEWAR \n 3. Dr. SURAJ ROTKE \n 4. Dr. MONALI DESHMUKH \n Dr. ACHAL BANDEBUCHE" << endl;
    cout << ".........................................................." << endl;
    cout << "                                   * Details Of Doctor**         " << endl;
    cout << " _________________" << endl;
    cout << " ||  Sr. No.  ||   Name of Doctor       ||   Gender of Doctor    ||   Mobile NO. Of Doctor    ||   Age Of Doctor    ||               Specialist                 ||" << endl;
    cout << " ||-----------||------------------------||-----------------------||---------------------------||--------------------||------------------------------------------||" << endl;
    cout << " ||     1.    ||  Dr. SUNITA  MESHRAM   ||        Female         ||      4567892380           ||         36         ||       Pediatrician(child specialist)     ||" << endl;
    cout << " ||-----------||------------------------||-----------------------||---------------------------||--------------------||------------------------------------------||" << endl;
    cout << " ||     2.    ||  Dr. KASHISH Lanjewar  ||        Female         ||      1234567890           ||         45         ||   Gastroenterologists(stomach, liver)    ||" << endl;
    cout << " ||-----------||------------------------||-----------------------||---------------------------||--------------------||------------------------------------------||" << endl;
    cout << " ||     3.    ||  Dr. Suraj Rotke       ||        Male           ||      7756090998           ||         40         ||   Cardiologists(heart & blood vessels)   ||" << endl;
    cout << " ||-----------||------------------------||-----------------------||---------------------------||--------------------||------------------------------------------||" << endl;
    cout << " ||     4.    ||  Dr. MONALI DESHMUKH   ||        Male           ||      9960003604           ||         35         ||          Family Physicians               ||" << endl;
    cout << " ||-----------||------------------------||-----------------------||---------------------------||--------------------||------------------------------------------||" << endl;
    cout << " ||     5.    ||  Dr. Achal BANDEBUCHE  ||        Female         ||      7709807013           ||         42         ||  Dermatologists(skin allergies, moles)   ||" << endl;
    cout << " ________________\n\n"
         << endl;
}
class heading : public hospital
{
public:
    heading()
    {
        cout << "   **   C++ PROJECT   **" << endl;
        cout << "**   HOSPITAL MANAGENT SYSTEM   **" << endl;
    }
};
int hospital ::objectcount = 0;
void hospital::detail()
{

    int i, n;
    int age;
    char address[100];
    char name[50];
    char problem[50];
    int date, month, yr;

    cout << "\nenter the no. of patients you want to appoint :" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {

        cout << "  \n**Enter The Details Of Each Patient**                       " << endl;

        cout << "_______________" << endl;
        cout << "Enter the name of patient : " << endl;
        cin >> p_name;
        cout << "Enter the gender of patient : " << endl;
        cin >> gender;
        cout << "Enter the date of treatment : " << endl;
        cin >> date >> month >> yr;
        cout << "Enter the age of patient : " << endl;
        cin >> age;
        cout << "Enter the address of patient:" << endl;
        cin >> address;

        cout << "Enter the problem of patient : " << endl;
        cin >> problem;
        cout << "**********" << endl;
        cout << "***Thank you for filling details**" << endl;
        objectcount++;

        cout << "*** PATIENT DETAILS *****" << endl;
        cout << "Name of Patient is  " << p_name << endl;
        cout << "Gender of patient is" << gender << endl;
        cout << "patient date of treatment is " << date << "-" << month << "-" << yr << endl;
        cout << "Address of patient is" << address << endl;
        cout << "Age of patient is" << age << endl;
        cout << "Problem of patient is" << problem << endl;
        cout << "\n\n total no. of patients =" << hospital::objectcount << endl;
    }
}
void hospital::staffdetail()
{
    cout << "staff detail" << endl;
}
void hospital::insurance()
{
    cout << "insurance" << endl;
}

int main()
{
    heading h;
    hospital *hd; // pointer
    hd = &h;
    hd->about();
    int choice, n, doc;

    cout << "\t\t WELCOME TO LAKSH HOSPITAL \t\t" << endl;
    do
    {
        cout << "----------------------------------------------";

        cout << endl
             << "|      1.available doctors with their details |" << endl
             << "|      2.Staff detail                         |" << endl
             << "|      3.Adding patient details               |" << endl
             << "|      4.Insurance                            |" << endl
             << "|      5.exit                                 |" << endl;
        cout << "-----------------------------------------------";
        cout << endl
             << "\nenter the choice:";
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            h.display();
            break;
        }
        case 2:
        {
            h.staffdetail();
            break;
        }
        case 3:
        {
            h.detail();
            h.display();
            cout << "enter the doctor name you want to make appointment with " << endl;
            cin >> doc;
            if (doc == 1)
            {
                cout << "||         1.   || Dr.SUNITA MESHRAM      ||        Female          ||    4567892380        || 36          ||  Pediatrician(child specialist)" << endl;
            }
            if (doc == 2)
            {
                cout << " ||     2.    ||  Dr. KASHISH Lanjewar  ||        Female         ||      1234567890      ||  45         ||   Gastroenterologists(stomach, liver)    ||" << endl;
            }
            if (doc == 3)
            {
                cout << " ||     3.    ||  Dr. Suraj Rotke       ||        Male           ||      7756090998      ||  40         ||   Cardiologists(heart & blood vessels)   ||" << endl;
            }
            if (doc == 4)
            {
                cout << " ||     4.    ||  Dr. MONALI DESHMUKH   ||        Male           ||      9960003604       ||  35         ||     Family Physicians               ||" << endl;
            }
            if (doc == 5)
            {
                cout << " ||     5.    ||  Dr. Achal BANDEBUCHE  ||        Female         ||      7709807013           ||         42         ||  Dermatologists(skin allergies, moles)   ||" << endl;
            }
        }
        case 4:
        {
            h.insurance();
            break;
        }
        case 5:
        {
            break;
        }

        default:
        {
            cout << "invalid entered choice" << endl;
            break;
        }
        }
    } while (choice < 5);
    return 0;
}
