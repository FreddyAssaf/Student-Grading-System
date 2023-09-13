#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//functions
void mainmenu();
void menu1();
void menu2();
void menu3();
void menu4();


double avgRec(int a[], int i, int n);
double average(int a[], int n);
bool passed (int a[], int size);



int main(){
    //login
    
    string username,password;
    cout<<"\t\tLOGIN\n-----------------------------------------\n";
   do{
        cout<<"Username: ";
        cin>>username;
        if(username != "main")
            cout<<"wrong username!\n";
   }while(username != "main");
    do{
        cout<<"Password: ";
        cin>>password;
        if( password != "main1234")
            cout<<"Wrong password!\n";
    }while( password != "main1234");



        //Main Menu
        int grade;
        int const students = 4;
        int const subjects = 4;
        int student1[subjects],student2[subjects],student3[subjects],student4[subjects];
        int math[students],physics[students],biology[students],chemistry[students];
        int classavg[students];//avg of the whole students
        int searchKey;
        bool passing;
        int temp, swap;

        int option1;
        while(option1 != 5){
            mainmenu();
            cin>>option1;
            switch(option1){
                //if user enters option 1
                case 1:
                    //menu 1
                    int option2;
                    while(option2 != 4)
                    {
                        menu1();
                        cin>>option2;
                        switch(option2){

                            case 0:
                            //math
                                do{
                                    cout<<"Enter Math grade of student 1(/20): ";
                                    cin>>grade;
                                    math[0]=grade;
                                    student1[0]=math[0];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //math
                                do{
                                    cout<<"Enter Math grade of student 2(/20): ";
                                    cin>>grade;
                                    math[1]=grade;
                                    student2[0]=math[1];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //math
                                do{
                                    cout<<"Enter Math grade of student 3(/20): ";
                                    cin>>grade;
                                    math[2]=grade;
                                    student3[0]=math[2];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //math
                                do{
                                    cout<<"Enter Math grade of student 4(/20): ";
                                    cin>>grade;
                                    math[3]=grade;
                                    student4[0]=math[3];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                                break;
                            case 1:
                            //phys
                                do{
                                    cout<<"Enter physics grade of student 1(/20): ";
                                    cin>>grade;
                                    physics[0]=grade;
                                    student1[1]=physics[0];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //phys
                                do{
                                    cout<<"Enter physics grade of student 2(/20): ";
                                    cin>>grade;
                                    physics[1]=grade;
                                    student2[1]=physics[1];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //phys
                                do{
                                    cout<<"Enter physics grade of student 3(/20): ";
                                    cin>>grade;
                                    physics[2]=grade;
                                    student3[1]=physics[2];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //phys
                                do{
                                    cout<<"Enter physics grade of student 4(/20): ";
                                    cin>>grade;
                                    physics[3]=grade;
                                    student4[1]=physics[3];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                                break;
                            case 2:
                            //biology
                                do{
                                    cout<<"Enter biology grade of student 1(/20): ";
                                    cin>>grade;
                                    biology[0]=grade;
                                    student1[2]=biology[0];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //biology
                                do{
                                    cout<<"Enter biology grade of student 2(/20): ";
                                    cin>>grade;
                                    biology[1]=grade;
                                    student2[2]=biology[1];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //biology
                                do{
                                    cout<<"Enter biology grade of student 3(/20): ";
                                    cin>>grade;
                                    biology[2]=grade;
                                    student3[2]=biology[2];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //biology
                                do{
                                    cout<<"Enter biology grade of student 4(/20): ";
                                    cin>>grade;
                                    biology[3]=grade;
                                    student4[2]=biology[3];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                                break;
                            case 3:
                            //chemistry
                                do{
                                    cout<<"Enter chemistry grade of student 1(/20): ";
                                    cin>>grade;
                                    chemistry[0]=grade;
                                    student1[3]=chemistry[0];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //chemistry
                                do{
                                    cout<<"Enter chemistry grade of student 2(/20): ";
                                    cin>>grade;
                                    chemistry[1]=grade;
                                    student2[3]=chemistry[1];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //chemistry
                                do{
                                    cout<<"Enter chemistry grade of student 3(/20): ";
                                    cin>>grade;
                                    chemistry[2]=grade;
                                    student3[3]=chemistry[2];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                            //chemistry
                                do{
                                    cout<<"Enter chemistry grade of student 4(/20): ";
                                    cin>>grade;
                                    chemistry[3]=grade;
                                    student4[3]=chemistry[3];
                                    if(grade<0 || grade>20)
                                        cout<<"\tGrade not valid\n";
                                }while(grade<0 || grade>20);
                                break;
                            //going back
                            case 4:
                                cout<<"\tGoing back..\n";
                                break;
                            }
                        if(option2 < 0 || option2 >4)
                            cout<<"\tinvalid option\n";


                    }
                    break;

                //if user enters option = 2
                case 2:
                    //menu2;
                    
                    int option3;
                    while(option3 != 2){
                        menu2();
                        cin>>option3;
                        switch(option3){
                            case 0:
                                cout<<"\tCalculating the Averages..\n";
                                cout<<"Student 1: "<<average(student1,subjects)<<endl;
                                classavg[0]=average(student1,subjects);
                                cout<<"Student 2: "<<average(student2,subjects)<<endl;
                                classavg[1]=average(student2,subjects);
                                cout<<"Student 3: "<<average(student3,subjects)<<endl;
                                classavg[2]=average(student3,subjects);
                                cout<<"Student 4: "<<average(student4,subjects)<<endl;
                                classavg[3]=average(student4,subjects);

                                cout<<"Class average: "<<average(classavg,students)<<endl;

                                break;
                            case 1:
                                cout<<"\tCalculating the Averages..\n";
                                cout<<"Math: "<<average(math,students)<<endl;
                                cout<<"Physics: "<<average(physics,students)<<endl;
                                cout<<"Biology: "<<average(biology,students)<<endl;
                                cout<<"Chemistry: "<<average(chemistry,students)<<endl;

                                break;
                            case 2:
                                cout<<"\tGoing back..";
                                break;

                        }
                    }
                    break;
                case 3:
                    //menu3
                    int option4;
                    while(option4 !=3) {
                        menu3();
                        cin >> option4;
                        switch(option4)
                        {
                            case 1:
                                
                                     while(1){
                                        swap = 0;
                                        for (int i=0; i<students-1; i++) {
                                            if ( classavg[i] < classavg[i+1] ) {
                                                temp = classavg [i];
                                                classavg [i] = classavg[i+1];
                                                classavg[i+1] = temp;
                                                swap = 1;
                                            }
                                        }
                                        if (swap == 0)
                                            break;
                                    }
                                    for (int i=0; i<students; i++)
                                    {
                                        cout << "Student " << i+1 <<": " << classavg[i];
                                        cout << endl;
                                    }
                                
                            break;
                            case 2:
                                    cout << "\tEnter average to search for it..";
                                    cout<<"\t average: ";
                                    cin >> searchKey;
                                    for (int i=0; i<subjects; i++)
                                    {
                                    if (searchKey == classavg[i])
                                        cout << "Average found in student " <<i+1<<endl;
                                        else 
                                            cout << "Average not found in student "<<i+1<<endl;
                                    }
                            break;
                            case 3:
                                cout << "\t Going back\n";
                            break;
                        }
                        if (option4<1|| option4>3)
                            cout << "\tinvalid option\n";
                    }
                    break;
                case 4:
                    //menu4
                    int option5;
                    while(option5!=2){ 
                    menu4();
                    cin >> option5;
                        switch (option5) {
                            case 1:
                                
                                for (int i=0; i<students;i++)
                                {
                                    cout << "Students " << i+1 << "...";
                                    passing = passed (classavg, i);
                                    if (passing)
                                        cout << "Passed" << endl;
                                    else
                                        cout << "Failed" << endl;
                                }
                            break;
                            case 2:
                                cout << "\t Going back\n";
                            break;
                            if (option5<0 || option5>2)
                                {
                                    cout << "\tInvalid option\n";
                                }
                        }
                            
                                
                        }
                        
                    break;
                    }
            }
            if(option1 == 5)
                cout<<"\tlogging out...\n";
            if(option1 < 1 || option1 >5)
                cout<<"\tinvalid option\n";
        }


//declaration
void mainmenu(){
    cout<<"\t\tMAIN MENU\n-----------------------------------------\n";
    cout<<"1-Display Grades"<<endl;
    cout<<"2-Compute Grades"<<endl;
    cout<<"3-Tools"<<endl;
    cout<<"4-Overview"<<endl;
    cout<<"5-Exit"<<endl;
    cout<<"\tOption: ";
}
void menu1(){
    cout<<"\t\tMENU 1\n-----------------------------------------\n";
    cout<<"\t Choose the subject,"<<endl;
    cout<<"0-Math"<<endl;
    cout<<"1-Physics"<<endl;
    cout<<"2-Biology"<<endl;
    cout<<"3-Chemistry"<<endl;
    cout<<"4-Back"<<endl;
    cout<<"\tOption: ";
}
void menu2(){
    cout<<"\t\tMENU 2\n-----------------------------------------\n";
    cout<<"0-Students Average"<<endl;
    cout<<"1-Subjects Average"<<endl;
    cout<<"2-Back"<<endl;
    cout<<"\tOption: ";
}
void menu3(){
    cout<<"\t\tMENU 3\n-----------------------------------------\n";
    cout<<"1-Sort grades"<<endl;
    cout<<"2-Search grades"<<endl;
    cout<<"3-Back" <<endl;
    cout<<"\tOption: ";
}
void menu4(){
    cout<<"\t\tMENU 4\n-----------------------------------------\n";
    cout<<"1-Results"<<endl;
    cout<<"2-Back" <<endl;
    cout<<"\tOption: ";
 }
// Recursively computes average of a[]
double avgRec(int a[], int i, int n)
{
    // Last element
    if (i == n-1)
        return a[i];
 
    // When index is 0, divide sum computed so
    // far by n.
    if (i == 0)
        return ((a[i] + avgRec(a, i+1, n))/n);
 
    // Compute sum
    return (a[i] + avgRec(a, i+1, n));
}
 
// Function that return average of an array.
double average(int a[], int size)
{
     return avgRec(a, 0, size);
}
bool passed ( int classavg[], int students) {
   return classavg[students] > 10;
     
}
