/*
// Video 2/3
#include <iostream>
using namespace std;

void MightGoWrong(){
    bool error= false;
    bool error2= true;
    if (error){
        throw "Something went wrong!";
    }
    if (error2){
        throw string("Error 2 caused a break in the code!");
    }
}

int main(){

    try{
    MightGoWrong();
    }
    catch(int e){
        cout << "Error code: "<<e << endl;
    }
    catch(char const* e){
        cout << "Error message: "<<e<<endl;
    }

    catch(string e){
        cout << "Third error message: "<< e<< endl;
    }

    cout << "Still running!";
    return 0;
}
*/


/*
// Video 4
#include <iostream>
class CanGoWrong{
    public:
    CanGoWrong(){
        char *pMemory = new char[9999999999999999];
        delete [] pMemory;
    }
};

int main(){
    try{
    CanGoWrong wrong;
    }
    catch(std::bad_alloc &e){
        std::cout<<"Cought exception:" << e.what()<< std::endl;

    }

    std::cout << "Still running"<<std::endl;

    return 0;
}
*/




/*
// Video 5
#include <iostream>
#include <exception>
using namespace std;



class MyException: public exception{
public:
    virtual const char* what() const throw(){
        return "Something bad happened.";
    }
};

class Test{
public:
    void GoesWrong(){
        throw MyException();
    }
};

int main(){
    Test test;
    try{
        test.GoesWrong();

    }
    catch(MyException &e){
        cout << e.what()<< endl;
    }

    return 0;
}
*/



/*
// Video 6
#include <iostream>
#include <exception>

using namespace std;

void GoesWrong(){
    bool error1Detected=false;
    bool error2Detected=true;

    if (error1Detected){
        throw bad_alloc();

    }
    if (error2Detected){
        throw exception();
    }

};

int main(){
    try{
        GoesWrong();

    }
    
    catch(bad_alloc &e){
        cout << e.what()<<endl;
    }
    catch(exception &e){
        cout << e.what()<<endl;
    }


    return 0;
}
*/



/*
// Video 7
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream OutputF;
    
    string OutputFileName = "TextFile.txt";

    OutputF.open(OutputFileName);
    
   
    if (OutputF.is_open()){
        OutputF << "Hello there, this is your second file."<< endl;
        OutputF << "This is the second line of your second text file."<< endl;
        OutputF.close();
    }else{
        cout << "Could not open the file "<< OutputFileName<< endl;
    }

    

    return 0;
}
*/


/*
// Video 8
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string Name = "TextFile.txt";
    ifstream Text1;
    Text1.open(Name);

        if (Text1.is_open()){
        string line;
        while(Text1){
            getline(Text1, line);
            cout << line<<endl;
        }
            Text1.close();
    }else{
        cout << "Could not open " << Name;
    }

    return 0;
}
*/


/*
// Video 9 (Parsing through text)
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream Data;
    Data.open("Stats.txt");

    if (!Data.is_open()){
        return 1;
    }

    
    while(Data) {
        string line;
        getline(Data, line, ':');
        int population;
        Data >> population;
        
        // Data.get();
        // This takes away the whitespace.
        Data>> ws;

        if (!Data){
            break;
        }
        cout<<population<< " " << line<< "\n"<<endl;

        
    }
    Data.close();

    return 0;
}
*/


/*
// Video 10 (Structures)
#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main(){



// Writing binary file
    Person Someone ={"Frodo", 23, 160.5};

    string FileName= "Test.bin";
    ofstream OutputFile;
    OutputFile.open(FileName, ios::binary);
    
    if (OutputFile.is_open()){

    OutputFile.write(reinterpret_cast<char*>(&Someone), sizeof(Person));
    OutputFile.close();
    
    }
    else{
        cout<< "Could not write file" + FileName;
    }

    

// Reading binary file

    Person SomeoneElse={};
    ifstream InputFile;
    InputFile.open(FileName, ios::binary);
    
    if (InputFile.is_open()){

    InputFile.read(reinterpret_cast<char*>(&SomeoneElse), sizeof(Person));
    InputFile.close();
    
    }
    else{
        cout<< "Could not write file" + FileName;
    }
    
    cout << SomeoneElse.age <<" "<<SomeoneElse.name;

    return 0;
}
*/

// Video 11 (VECTORS)

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){

//     vector<string> strings(6);
//     strings.push_back("Four");
//     strings[1]="One";
//     strings[2]="Two";
//     strings[3]="Three";
    
//     // first for loop for this vector
//     // for (int i=0; i <6; i++){
//     //     cout<< strings[i];
//     // }


//     // Using vector specific iterator
//     for(vector<string>::iterator it= strings.begin();   it!=strings.end();    it++){
//         cout<< *it << endl;
//     }



//     return 0;
// }

