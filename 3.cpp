#include <iostream>
#include <ctime>  //for random number generation...
using namespace std;
int main()
{
    //declare variables..
    int enteringReflect = 0;
    int exitingReflect = 0;
    int absorb = 0;
    int exit = 0;
    int enteringReflect2 = 0;
    int exitingReflect2 = 0;
    int absorb2 = 0;
    int exit2 = 0;
   
    srand(time(0));
    ////////////////////////////////////////////////////////////////
    
        for (int j = 0; j < 100; j++)
        {


            for (int i = 0; i < 10000; i++)
            {

                int random1 = (rand() % 100);
      
                if (random1 < 1)  //entering Reflect..
                {
                    enteringReflect = enteringReflect + 1;
                }
                else
                {
                    int random2 = (rand() % 400);
                  
                    if (random2 < 3)   //absorb..
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
                        else
                        {
                            int random4= (rand() % 200);
                            if (random4 < 1)
                            {
                                enteringReflect2 = enteringReflect2 + 1;
                            }
                            else
                            {
                                int random5= (rand() % 200);
                                if (random5 < 1)
                                {
                                    absorb2 = absorb2 + 1;
                                }
                                else
                                {
                                    int random6= (rand() % 10000);
                                    if (random6 < 1)
                                    {
                                        exitingReflect2 = exitingReflect2 + 1;
                                    }
                                }
                            }
                        }
                    }

                }
                
            }
            cout << endl << "After " << 10000 * (j + 1) << " Simulations  : " << endl;
            cout << "Entering Reflect photons(medium 1) : " << enteringReflect << endl;
            cout << "Absorb photons          (medium 1) : " << absorb << endl;
            cout << "Exiting Reflect photons (medium 1) : " << exitingReflect << endl;
            cout << "Entering Reflect photons(medium 2) : " << enteringReflect2 << endl;
            cout << "Absorb photons          (medium 2) : " << absorb2 << endl;
            cout << "Exiting Reflect photons (medium 2) : " << exitingReflect2 << endl;
            cout << "Exit photons            (medium 2) : " << 10000  - enteringReflect2 - absorb2 - exitingReflect2 - enteringReflect - absorb - exitingReflect << endl;
             enteringReflect = 0;
             exitingReflect = 0;
             absorb = 0;
             exit = 0;
             enteringReflect2 = 0;
             exitingReflect2 = 0;
             absorb2 = 0;
             exit2 = 0;
        }

    
    





    return 0;
}