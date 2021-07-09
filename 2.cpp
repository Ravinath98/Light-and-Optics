#include <iostream>
#include <ctime>  //for random number generation..
using namespace std;
int main()
{
    //declare variables....
    int enteringReflect = 0;
    int exitingReflect = 0;
    int absorb = 0;
    int reReflection = 0;
    int exit = 0;
    //for 1000000 photons..
    srand(time(0));  

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
                    int random2 = (rand() % 200);
                    
                    if (random2 < 1)   //absorb..
                    {
                        absorb = absorb + 1;
                    }
                    else
                    {
                        int random3 = (rand() % 100);
                       
                        if (random3 > 0)  //exiting reflect.....
                        {
                            reReflection = reReflection + 1;
                            int random4 = rand() % 1000;
                            if (random4 > 0)
                            {
                                exit = exit + 1;
                            }

                        }
                    }

                }


            }
            cout << endl << "After " << 10000 * (j + 1) << " Simulations  : " << endl;
            cout << "Exit photons             : " << exit << endl;
             enteringReflect = 0;
             exitingReflect = 0;
             absorb = 0;
             exit = 0;

        }


    return 0;
}