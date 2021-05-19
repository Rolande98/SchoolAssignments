// Program to count votes for candidates from different voting stations
#include <iostream>
using namespace std;

   int main()

   {
       // declaring variables

         int votesForA =0;
         int votesForB =0;
         int votesForC =0;
         int spoiltVotes =0;
         char candidate;
         char x;
         int votingStations =1;
         int count = 1;

         // For loop for voting stations

         for ( int i = 1; i< votingStations + 1; i++)

         {
             cout<< "Voting station " << count++ << endl;
             cout<< " Please enter the candidate that was voted for - " << endl;
                cin >> candidate;

               // While loop
                 while (candidate != x && count <= votingStations +1 )

               // switch statement to count votes

                 {switch (candidate)

                    {case 'a':
                       votesForA++;
                        break;

                         case 'b':
                          votesForB++;
                           break;

                             case 'c':
                              votesForC++;
                               break;

                                  default : spoiltVotes++;}}

         }

          cout<< " Total votes for A " <<  votesForA << endl;
          cout<< " Total votes for B " <<  votesForB << endl;
          cout<< " Total votes for C " <<  votesForC << endl;
          cout<< " Total spoilt votes " <<  spoiltVotes << endl;

          return 0;
   }
