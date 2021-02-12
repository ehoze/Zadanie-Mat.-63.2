#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;
string ciag;
int score;
class zadanie632
{
                vector <string> ciag;
        public:
                void wprowadz();
                void wypisz();
                bool boolcheck(string ciag);
                int obliczanie();
                int sprawdzenie(int x, int y);
                int zapiszDoPliku(const char *);             
};

void zadanie632::wprowadz()
{

		fstream plik;  
        string wprowadzany;
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 63.1&2\\ciagi.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                	plik >> wprowadzany;
                	ciag.push_back(wprowadzany);
                   }
                   plik.close();     
        			
}


void zadanie632::wypisz()
{
		for (int i = 0; i < ciag.size(); i++)
		{
			if(boolcheck(ciag[i]) == true)
			{
				score++;
			}
			
		}
}


bool zadanie632::boolcheck(string ciag)
{
	int score;
	for (int i = 0; i < ciag.length()-1; i++)
 	{
		if (ciag[i] == '1' && ciag[i+1] == '1') 
		{
			return false;
		}
	}
	return true;
}




//Eryk Kucharski
int zadanie632::obliczanie()
{
	
}


zadanie632::zapiszDoPliku(const char *nazwa)
{	
        ofstream plik;
        plik.open(nazwa);
        cout << score;
        plik << score;
        plik.close();
        
}



int main()
{
//Eryk Kucharski
	zadanie632 x;
    x.wprowadz();
    x.wypisz();
//	x.boolcheck(ciag);
//  x.obliczanie();
    x.zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 63.1&2\\632wynik.txt");
    return 0;
}
