#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream dane("dane_6_2.txt");
    ofstream wypis("wyniki_6_2.txt");
    string slowo;
    int a, k;
    for (int i = 0; i < 3000; ++i)
    {
        dane >> slowo;
        dane >> k;
        for (int j = 0; j < slowo.size(); ++j)
        {
            a = slowo[j];
            for (int l = 0; l < k; ++l)            
            {
                if (a > 65)
                    a--;
                else
                    a = 90;                         
            }
            slowo[j] = a;
        }
        wypis << slowo << endl;
    }
    dane.close();
    wypis.close();
    return 0;
}
