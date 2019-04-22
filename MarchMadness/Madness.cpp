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

  Ea = 1 / (1 + pow(10 , ((Rb - Ra) / 400)));
  Eb = 1 / (1 + pow(10 , ((Ra - Rb) / 400)));

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

  // //Variables
  // int Ra, Rb, Overall;
  // double nRa, nRb, Pa, Pb;
  // int K = 1;
  //
  // //Read ins
  // cout << "Enter the rank of the team A: ";
  // cin >> Ra;
  // cout << "Enter the rank of the team B: ";
  // cin >> Rb;
  // cout << endl;
  //
  // //Probability
  // Pa = 1 / (1 + pow(10 , (Ra - Rb)));
  // Pb = 1 / (1 + pow(10 , (Rb - Ra)));
  // cout << "The probability of team A winning is " << Pa << endl;
  // cout << "The probability of team B winning is " << Pb << endl << endl;
  //
  // //New rank
  // nRa = Ra - K * (1 - Pa);
  // nRb = Rb - K * (1 - Pb);
  // cout << "If team A wins: " << nRa << endl;
  // cout << "If team B wins: " << nRb << endl;

  return 0;
}

// DEFINE FUNCTIONS
