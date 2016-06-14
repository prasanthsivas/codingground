#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

class Machines
{
    public:
    
    private:
    string machine_Name;
	bool relevance;
	string category;
	bool value_Adding;
};

int main()
{
   	ifstream file("test.csv"); 
   	string line;
   	
   	getline(file,line);

    while(getline(file,line)){
        istringstream iss(line);
        string token;
        while(getline(iss,token,',')){
            cout<<token <<" ";
        }
        cout<<"\n";
    }
   return 0;
}

