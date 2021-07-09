#include <iostream>
#include <ctime>
#include <iomanip>


/// LOOK AT THE IMAGE WITH THE ASSIGNMENT FOLDER 


using namespace std;
int main()
{   //assume here refraction angle as 20 for all places...(because it's the only information supplied..and there is no refraction index mentioned)
	srand(time(0));
	
	 
	//in here rays random numbers are assign as left to right 0 to 8
	int exitRod1 = 0;  //number of photons that exit to other side fall into rod1
	int exitRod2 = 0;  //number of photons that exit to other side fall into rod2
	int exitRod3 = 0;  //number of photons that exit ot other side fall into rod3
	//rod1(layer 1 left rod)
	//get calculation for 10000 photons...
	for (int i = 0; i < 10000; i++)
	{
		int rod1 = rand() % 9; //this is for get random photon fall in to the rod range...
		if (rod1 == 0 || rod1==1 || rod1==5 || rod1==6) 
		{
			int enterRand1 = rand() % 100;
			if (enterRand1 > 4)
			{
				int ab1 = rand() % 100;
				if (ab1 > 9)
				{
					int exitRand1 = rand() % 100;
					if (exitRand1 > 2)
					{
						int enterRand2 = rand() % 100;
						if (enterRand2 > 4)
						{
							int ab2 = rand() % 100;
							if (ab2 > 9)
							{
								int exitRand2 = rand() % 100;
								if (exitRand2 > 2)
								{
									int enterRand3 = rand() % 100;
									if (enterRand3 > 4)
									{
										int ab3 = rand() % 100;
										if (ab3 > 9)
										{
											int exitRand3 = rand() % 100;
											if (exitRand3 > 2)
											{
												exitRod1 = exitRod1 + 1;
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
		
		else if (rod1 == 2 || rod1==3 || rod1==7)
		{
			int enterRand1 = rand() % 100;
			if (enterRand1 > 4)
			{
				int ab1 = rand() % 100;
				if (ab1 > 9)
				{
					int exitRand1 = rand() % 100;
					if (exitRand1 > 2)
					{
						int enterRand3 = rand() % 100;
						if (enterRand3 > 4)
						{
							int ab3 = rand() % 100;
							if (ab3 > 9)
							{
								int exitRand3 = rand() % 100;
								if (exitRand3 > 2)
								{
									exitRod1 = exitRod1 + 1;
								}
							}
						}
					}
				}
			}
		}
		
		else if (rod1 == 4)
		{
			exitRod1 = exitRod1 + 1;
		}
		
		else if (rod1 == 8)
		{
			continue;
		}
	}

	//layer 1 rod 2 falling photons and after that those rout..
	for (int i = 0; i < 10000; i++)
	{
		int rod2 = rand() % 9;
		if (rod2 == 0 || rod2==1 || rod2==2 || rod2==6 || rod2==7 || rod2==8)
		{
			int rod1 = rand() % 9;
			if (rod1 == 0 || rod1 == 1 || rod1 == 5 || rod1 == 6)
			{
				int enterRand1 = rand() % 100;
				if (enterRand1 > 4)
				{
					int ab1 = rand() % 100;
					if (ab1 > 9)
					{
						int exitRand1 = rand() % 100;
						if (exitRand1 > 2)
						{
							int enterRand2 = rand() % 100;
							if (enterRand2 > 4)
							{
								int ab2 = rand() % 100;
								if (ab2 > 9)
								{
									int exitRand2 = rand() % 100;
									if (exitRand2 > 2)
									{
										int enterRand3 = rand() % 100;
										if (enterRand3 > 4)
										{
											int ab3 = rand() % 100;
											if (ab3 > 9)
											{
												int exitRand3 = rand() % 100;
												if (exitRand3 > 2)
												{
													exitRod2 = exitRod2 + 1;
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
		else if (rod2 == 3 || rod2==5)
		{
			continue;
		}
		else if (rod2 == 4)
		{
			exitRod2 = exitRod2 + 1;
		}
				
	}

	//layer 1 rod3 falling photons and after this the rout of photons....
		for (int i = 0; i < 10000; i++)
		{
			int rod3 = rand() % 9;
			if (rod3 == 1 || rod3==5 || rod3==6)
			{
				int enterRand1 = rand() % 100;
				if (enterRand1 > 4)
				{
					int ab1 = rand() % 100;
					if (ab1 > 9)
					{
						int exitRand1 = rand() % 100;
						if (exitRand1 > 2)
						{
							int enterRand3 = rand() % 100;
							if (enterRand3 > 4)
							{
								int ab3 = rand() % 100;
								if (ab3 > 9)
								{
									int exitRand3 = rand() % 100;
									if (exitRand3 > 2)
									{
										exitRod3 = exitRod3 + 1;
									}
								}
							}
						}
					}
				}
			}
			else if (rod3 == 4)
			{
				exitRod3 = exitRod3 + 1;
			}
			else if (rod3 ==2 || rod3==3 || rod3==7 || rod3==8)
			{
			
					int enterRand1 = rand() % 100;
					if (enterRand1 > 4)
					{
						int ab1 = rand() % 100;
						if (ab1 > 9)
						{
							int exitRand1 = rand() % 100;
							if (exitRand1 > 2)
							{
								int enterRand2 = rand() % 100;
								if (enterRand2 > 4)
								{
									int ab2 = rand() % 100;
									if (ab2 > 9)
									{
										int exitRand2 = rand() % 100;
										if (exitRand2 > 2)
										{
											int enterRand3 = rand() % 100;
											if (enterRand3 > 4)
											{
												int ab3 = rand() % 100;
												if (ab3 > 9)
												{
													int exitRand3 = rand() % 100;
													if (exitRand3 > 2)
													{
														exitRod3 = exitRod3 + 1;
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
			else if (rod3==0)
			{
				continue;
			}

		}
		float finalOutput = exitRod1 + exitRod2 + exitRod3;
		float outputPercentage = finalOutput / 300.0;
		cout << fixed;
		cout << setprecision(2);
		cout << "Output Photons percentage : "<<outputPercentage <<"%"<< endl;


	return 0;
}