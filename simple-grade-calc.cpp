#include <iostream>

using namespace std;


int main(){
    int score;
    char grade;

    cout << "Enter Your Score : ";
    cin  >> score;

    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'c' : (score >= 60) ? 'D' : 'F' ;

    cout << "Your Grade Is :- " << grade << endl;

    switch (grade)
    {
        case 'A':
        cout << "Excellent Work !" << endl;
        break;
        case 'B':
        cout << "Well Done !" <<endl;
        break;
        case 'C':
        cout << "Good Job !" <<endl;
        break;
        case 'D' :
        cout << "You Passed, But You Could Do Better." <<endl;
        break;
        case 'F':
        cout << "Sorry, You Failed." <<endl;
        default:
        cout << "Invalid Grade." <<endl;
        break;
    }

    if(grade == 'A' || grade == 'B' || grade == 'c'|| grade == 'D'){
        cout << "Congratulations ! You Are Eligible For The Next Level. " <<endl;
    }else if(grade == 'F'){
        cout << "Please Try Again Next Time." <<endl;
    }



    return 0;
}