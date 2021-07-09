#include <iostream>
#include <ctime>  //for random number generation...
using namespace std;
int main()
{
    //declare variables...
    int enteringReflect = 0;
    int exitingReflect = 0;
    int absorb = 0;
    int exit = 0;
    int enteringReflect2 = 0;
    int exitingReflect2 = 0;
    int absorb2 = 0;
    int exit2 = 0;
    int reEnter = 0;
    int reEnterFinal = 0;
    int inMed1 = 0;
    int outMed2 = 0;
    int ab1 = 0;
    int ab2 = 0;
    int finalExitMed1 = 0;
    srand(time(0));
    ////////////////////////////////////////////////////////////////

    for (int j = 0; j < 100; j++)
    {


        for (int i = 0; i < 100000; i++)
        {

            int random1 = rand() % 100;

            if (random1 < 1)  //entering Reflect..
            {
                enteringReflect = enteringReflect + 1;
            }
            else  //entering the first medium...
            {
                int random2 = (rand() % 400);

                if (random2 < 3)   //absorb in the first medium....
                {
                    absorb = absorb + 1;
                }
                else
                {
                    int random3 = (rand() % 1000);

                    if (random3 < 1)  //exiting reflect.....
                    {
                        exitingReflect = exitingReflect + 1;
                    }
                    else ///if exit from medium 1........
                    {
                        exit = exit + 1;        //exit from medium 1..........
                        int random4 = (rand() % 200);
                        if (random4 < 1)
                        {
                            enteringReflect2 = enteringReflect2 + 1;  //if reflect from 2nd medium..
                        }
                        else  //if Enter to the medium 2...
                        {
                         
                                int random5 = rand() % 200;
                                if (random5 < 1) //if absorb(2nd medium) in the first time...
                                {
                                    ab1 = ab1+1;
                                }
                                else  //if not absorb....
                                {
                                    int random6 = rand() % 20;
                                    if (random6 <1) //if get out from the 2nd medium....
                                    {
                                        exit2 = exit2 + 1;
                                     
                                    }
                                    else  //if re Reflect because of the paint...
                                    {   
                                        exitingReflect2 = exitingReflect2 + 1;  //reflect because of the paint....
                                        int random7 = rand() % 200;
                                        if (random7 < 1) //second absorption...
                                        {
                                            ab2 = ab2+1;
                                        }
                                        else  // if no absorb 2nd time...
                                        {
                                            int random8 = rand() % 10000;
                                            if (random8 > 0) //if not reflect from the 2nd medium entering(out from the medium 2//
                                            {
                                                int random9 = rand() % 100;
                                                if (random9 > 0)
                                                {
                                                    reEnterFinal = reEnterFinal + 1;
                                                    int random12 = rand() % 400; //second absorption from medium 1
                                                    if (random12 > 3)
                                                    {
                                                        int random10 = rand() % 1000;
                                                        if (random10 > 0)
                                                        {
                                                            finalExitMed1 = finalExitMed1 + 1;
                                                        }
                                                    }

                                                }
                                            }
                                     
                                        }
                                        
                                    }
                                }
                          
                        }
                    }
                }

            }

        }
        cout << endl << "After " << 100000 * (j + 1) << " Simulations  : " << endl;
        cout << "Total Number of Photons Reflect from the paint                : " << exitingReflect2 << endl;
        cout << "Total Number of Photons ReEnter to the Medium 1 from Medium 2 : " << reEnterFinal << endl;
        cout << "Total Number of Photons Exit From the Medium 1                : " << finalExitMed1 << endl;
         enteringReflect = 0;
         exitingReflect = 0;
         absorb = 0;
         exit = 0;
         enteringReflect2 = 0;
         exitingReflect2 = 0;
         absorb2 = 0;
         exit2 = 0;
         reEnter = 0;
         reEnterFinal = 0;
         inMed1 = 0;
         outMed2 = 0;
         ab1 = 0;
         ab2 = 0;
         finalExitMed1 = 0;
       
    }








    return 0;
}
