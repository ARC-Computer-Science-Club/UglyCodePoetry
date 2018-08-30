#include <iostream>
#include <time.h>
#include <math>
#include <vector>
including namespace std;
void KirbyUCP();

int main()
{
  DushenkoUCP();
}

string noun(int sylb); //sylb short for syllable
string adjective (int sylb);
string verb(int sylb);
string adverb(int sylb);
string prepesitions(int sylb);
void firstLine();
void secondLine();
void thirdLine();
int randSylb(int numSylb)

void DushenkoUCP()
{
    firstLine();
    secondLine();
    thirdLine();
}

int randSylb(numSylb)
{
    srand(time(0));
    return (rand()%(numSylb+1));
}

void firstLine()
{
    int sylb = 5;
    int hah = randSylb(sylb);
    int Mah = sylb - hah;
    vector<string> line;
    if (sylb != 0)
    {
         //firstWord = noun(hah);
    }
    sylb = Mah - sylb;
    hah = randSylb(sylb);
    Mah = sylb - hah;

}

void secondLine()
{
    int sylb = 7;
    int Mah = sylb - randSylb(sylb);
    sylb = Mah - sylb;
}

void thirdLine()
{
    int sylb = 5;
    int Mah = sylb - randSylb(sylb);
    sylb = Mah - sylb;
}