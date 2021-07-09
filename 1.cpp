#include <iostream>
#include <ctime>  //for random number generation...
using namespace std;
int main()
{
    //declare variables...
    int enteringReflect;
    int exitingReflect ;
    int absorb ;
    int exit ;
    srand(time(0));
    ////////////////////////////////////////////////////////////////
    cout << "Please select number of photon simulations : " << endl;
    cout << "10000 photons   : 1 " << endl;
    cout << "100000 photons  : 2 " << endl;
    cout << "1000000 photons : 3 " << endl;
    int select;
    cin >> select;  //select option...


    if (select == 1)  //for 10000 photons simulation...
    {
        enteringReflect = 0;
        exitingReflect = 0;
        absorb = 0;
        exit = 0;
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
                    int random3 = (rand() % 1000);
                    if (random3 < 1)  //exiting reflect.....
                    {
                        exitingReflect = exitingReflect + 1;
                    }
                }

            }


        }
        cout << endl << "After 10000 Simulations  : " << endl;
        cout << "Entering Reflect photons : " << enteringReflect << endl;
        cout << "Absorb photons           : " << absorb << endl;
        cout << "Exiting Reflect photons  : " << exitingReflect << endl;
        cout << "Exit photons             : " << 10000  - enteringReflect - absorb - exitingReflect << endl;
       
    }
    else if (select == 2) //for 100000 photons simulation....
    {
         enteringReflect = 0;
         exitingReflect = 0;
         absorb = 0;
         exit = 0;
        for (int j = 0; j < 10; j++)
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
                        int random3 = (rand() % 1000);
                        if (random3 < 1)  //exiting reflect.....
                        {
                            exitingReflect = exitingReflect + 1;
                        }
                    }

                }


            }
            cout << endl << "After "<< 10000 * (j + 1) <<" Simulations  : " << endl;
            cout << "Entering Reflect photons : " << enteringReflect << endl;
            cout << "Absorb photons           : " << absorb << endl;
            cout << "Exiting Reflect photons  : " << exitingReflect << endl;
            cout << "Exit photons             : " << 10000 - enteringReflect - absorb - exitingReflect << endl;
            enteringReflect = 0;
            exitingReflect = 0;
            absorb = 0;
            exit = 0;
        }
        

    }

    
    else if (select == 3)  //for 1000000 photons simulation...
    {
        enteringReflect = 0;
        exitingReflect = 0;
        absorb = 0;
        exit = 0;
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
                    int random3 = (rand() % 1000);
                   
                    if (random3 < 1)  //exiting reflect.....
                    {
                        exitingReflect = exitingReflect + 1;
                    }
                }

            }

        }
        cout << endl << "After " << 10000 * (j + 1) << " Simulations  : " << endl;
        cout << "Entering Reflect photons : " << enteringReflect << endl;
        cout << "Absorb photons           : " << absorb << endl;
        cout << "Exiting Reflect photons  : " << exitingReflect << endl;
        cout << "Exit photons             : " << 10000 - enteringReflect - absorb - exitingReflect << endl;

        enteringReflect = 0;
        exitingReflect = 0;
        absorb = 0;
        exit = 0;
    }

    }
    else
    {
        cout << "wrong input!!!!" << endl;
    }
   

   

      
	return 0;
}