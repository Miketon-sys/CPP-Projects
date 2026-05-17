#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

/*
To take charge of this post all government properties and view.
To walk my post in a military manner keeping always on alert and observing everything that takes place within sight or hearing.
To report all violation of orders I am instructed to enforce.
To repeat all calls from post more distance from the guardhouse then my own.
To quit my post only when properly relieved.
To receive, obey and pass on the sentinel who relieved me all order from the Commanding Officer of the day and non-commissioned Officer of the guard only.
To talk to no one except in line of duty.
To give the alarm in case of fire or disorder.
To call the commander of the relief in any case not covered by instruction.
To salute all officers and all colors and standard not case.
To be especially watchful at night and during the time for challenge all persons or near my post and to allow no one to pass without proper authority.
*/

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int randomNum=1;
    while(randomNum<12)
    {
        string answer;

        switch(randomNum)
        {
            case 1:
                cout<<"Answer for 1: ";
                getline(cin, answer);
                if(answer=="To take charge of this post all government properties and view.")
                    cout<<"Correct!\n";
                else
                    cout<<"Wrong: To take charge of this post all government properties and view.\n";
                break;

            case 2:
                cout<<"Answer for 2: ";
                getline(cin, answer);
                if(answer=="To walk my post in a military manner keeping always on alert and observing everything that takes place within sight or hearing.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To walk my post in a military manner keeping always on alert and observing everything that takes place within sight or hearing.\n";
                break;

            case 3:
                cout<<"Answer for 3: ";
                getline(cin, answer);
                if(answer=="To report all violation of orders I am instructed to enforce.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To report all violation of orders I am instructed to enforce.\n";
                break;

            case 4:
                cout<<"Answer for 4: ";
                getline(cin, answer);
                if(answer=="To repeat all calls from post more distance from the guardhouse then my own.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To repeat all calls from post more distance from the guardhouse then my own.\n";
                break;

            case 5:
                cout<<"Answer for 5: ";
                getline(cin, answer);
                if(answer=="To quit my post only when properly relieved.\n")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To quit my post only when properly relieved.\n";
                break;

            case 6:
                cout<<"Answer for 6: ";
                getline(cin, answer);
                if(answer=="To receive, obey and pass on the sentinel who relieved me all order from the Commanding Officer of the day and non-commissioned Officer of the guard only.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To receive, obey and pass on the sentinel who relieved me all order from the Commanding Officer of the day and non-commissioned Officer of the guard only.\n";
                break;

            case 7:
                cout<<"Answer for 7: ";
                getline(cin, answer);
                if(answer=="To talk to no one except in line of duty.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To talk to no one except in line of duty.\n";
                break;

            case 8:
                cout<<"Answer for 8: ";
                getline(cin, answer);
                if(answer=="To give the alarm in case of fire or disorder.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To give the alarm in case of fire or disorder.\n";
                break;

            case 9:
                cout<<"Answer for 9: ";
                getline(cin, answer);
                if(answer=="To call the commander of the relief in any case not covered by instruction.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To call the commander of the relief in any case not covered by instruction.\n";
                break;

            case 10:
                cout<<"Answer for 10: ";
                getline(cin, answer);
                if(answer=="To salute all officers and all colors and standard not case.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To salute all officers and all colors and standard not case.\n";
                break;

            case 11:
                cout<<"Answer for 11: ";
                getline(cin, answer);
                if(answer=="To be especially watchful at night and during the time for challenge all persons or near my post and to allow no one to pass without proper authority.")
                    cout<<"Correct\n";
                else
                    cout<<"Wrong: To be especially watchful at night and during the time for challenge all persons or near my post and to allow no one to pass without proper authority.\n";
                break;

        }
        randomNum++;
    }



    return 0;
}
