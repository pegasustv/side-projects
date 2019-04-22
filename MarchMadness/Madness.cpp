/*
   File: Madness.cpp
   Created by: Brandon Bridges
   Creation Date: 6/3/2019
   Synopsis: March madness bracket creator thing
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// FUNCTION PROTOTYPES

int main(){

/*
   Ea = 1 / (1 + 10 ^ ((Rb - Ra) / 400))
   Eb = 1 / (1 + 10 ^ ((Ra - Rb) / 400))

   RwinnerNew = Rwinner + K * (1 - Ewinner)
   RloserNew = Rloser + K * (0 - Eloser)

   Ra' = Ra + K * (1 - Ea)
   Rb' = Rb + K * (0 - Eb)
 */

        int K;
        double Ra, Rb, Ea, Eb, Ewinner, Eloser, Rwinner, RwinnerNew, Rloser,
               RloserNew, RaNew, RbNew;

        cin >> Ra;
        cin >> Rb;
        cin >> K;

        Ea = 1 / (1 + pow(10, ((Rb - Ra) / 400)));
        Eb = 1 / (1 + pow(10, ((Ra - Rb) / 400)));

        cout << Ea << endl;
        cout << Eb << endl;
        cout << endl;

        Ewinner = Ea;
        Rwinner = Ra;
        Eloser = Eb;
        Rloser = Rb;

        RwinnerNew = Rwinner + K * (1 - Ewinner);
        RloserNew = Rloser + K * (0 - Eloser);

        cout << RwinnerNew << endl;
        cout << RloserNew << endl;
        cout << endl;

        RaNew = Ra + K * (1 - Ea);
        RbNew = Rb + K * (0 - Eb);

        cout << RaNew << endl;
        cout << RbNew << endl;

        return 0;
}

// DEFINE FUNCTIONS
