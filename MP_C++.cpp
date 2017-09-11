#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include<algorithm>
#include<locale>

using namespace std;

int main()
{
    string line;
    fstream inputfile;
    fstream outfile;
    outfile.open("GB_Copy.txt", ios::out);
    int start = clock();
    for(int j=0;j<5;j++)
    {
        inputfile.open("1GB.txt", ios::in);
        while(!inputfile.eof())
        {
            getline(inputfile, line);
            transform(line.begin(), line.end(), line.begin(), ::toupper);
            outfile << line << "\n";
        }
        cout<< (clock() - start)/CLOCKS_PER_SEC<<endl;
        inputfile.close();
    }
    outfile.close();
    return 0;
}