#include <iostream>
#include <set>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>


using namespace std;



int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUS");
    int const SIZE = 10;

    vector<int> vectA;
    vector<int> vectB;
    set<int> setA;

    for (int i = 0; i < SIZE; i++) {
        vectA.push_back(rand() % 100 + 1);
    }

    cout << "Количество чисел " << SIZE << endl;

    vector<int>::iterator iterVe = vectA.begin();
    while (iterVe != vectA.end()) {
        cout << *iterVe << " ";
        iterVe++;
    }

    iterVe = vectA.begin();
    while (iterVe != vectA.end()) {
        setA.insert(*iterVe);
        iterVe++;
    }

    cout << "\nКоличество различных чисел " << setA.size() << endl;
    
    iterVe = vectA.begin();
    while (iterVe != vectA.end()) {
        if (find(vectB.begin(), vectB.end(), *iterVe) == vectB.end()) {
            vectB.push_back(*iterVe);
        }
        iterVe++;
    }

    iterVe = vectB.begin();
    while (iterVe != vectB.end()) {
        cout << *iterVe << " ";
        iterVe++;
    }


    cout << "\nКоличество различных чисел " << vectB.size() << endl;
}
