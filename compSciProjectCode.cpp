#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{


int flightArray[1460];

    for(int x = 0; x <= 1460; x++)
    {
        for(int y = 0; y <= 40; y++)
        {
            srand (time(0));
            flightArray[x] = rand() % 5 + 1;
        }
				for(int y = 40; y <= 1460; y++;)
				{
		        flightArray[x] = 5;
				}
    }

}


#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    
    int flightArray[1460];

    for(int x = 0; x <= 1460; x++)
    {
        for(int y = 0; y <= 40; y++)
        {
            srand (time(0));
            flightArray[x] = rand() % 5 + 1;
        }
        flightArray[x] = 5;
    }

    
    
    int dateInputYear = 0;
    cout << " What year would you like to view? [2022 - 2023] : ";
    cin >> dateInputYear;
    if (dateInputYear > 2023 || dateInputYear < 2022)
        {
    	    cout << " That year does not exist, please try again: ";
    	    cin >> dateInputYear;
        }
    int dateInputMonth = 0;
    cout << " What month would you like to view? [1 - 12] : ";
    cin >> dateInputMonth;
    if (dateInputMonth > 12 || dateInputMonth < 1)
        {
    	    cout << " That month does not exist, please try again: ";
    	    cin >> dateInputMonth;
        }


    int dateInputDay = 0;
    cout << " What day of the month would you like to view? [1 - 31]  : ";
    cin >> dateInputDay;
    if (dateInputDay > 31 || dateInputDay < 1)
        {
    	    cout << " That day does not exist, please try again: ";
    	    cin >> dateInputDay;
        }






    /*
       
        
    if (dateInputMonth = dateInputMonth + dateInputMonth % 2)
        {
            if(dateInputDay = 31)
                {
                cout << " That day does not exist in that month [CODE 1 !] , please try again : ";
                cin >> dateInputDay;
                } 
        }
        
        
    */
        
        
        
        
    if(dateInputMonth = 2)
        {
            
            /*
            
            if(dateInputDay =30)
                {
                    cout << " That day does not exist in febuary, please try again : ";
                    cin >> dateInputDay;
                } 
                
            */
            
            
            /*
            
            if(dateInputDay = 31)
                {
                    cout << " That day does not exist in febuary [CODE 2!], please try again : ";
                    cin >> dateInputDay;
                }
                
                */
        }

    for(int z = 0; z <= 1460; z++)
        {
            if(dateInputYear = 2022)
                {
                    /*
                    
                    if(dateInputYear = 2022 && dateInputMonth < 12)
                        {
                            return 0;
                        }
                        
                        */
                        
                    for(int a = 0; a < 13; a ++)
                        {
                            if(dateInputMonth = a)
                                {   
                                    for(int b = 0; a < 31; a++)
                                        {
                                            if(dateInputDay = a)
                                                {
                                                    
                                                    
                                                    cout << " This is the status of flight " << z << " : " << flightArray[z] << endl;
                                                    cout << " Flight " << z << " has " << flightArray[z] << " seats available." << endl;
                                                    
                                                    
                                                   
                                                }
                                            }
                                        }
                                }
                            if(dateInputYear = 2023)
                                {
                                    if(dateInputYear = 2022 && dateInputMonth < 12)
                                        {
                                            return 0;
                                        }
                                    for(int a = 0; a < 13; a ++)
                                        {
                                            if(dateInputMonth = a)
                                                {
                                                    for(int b = 0; a < 31; a++)
                                                        {
                                                            if(dateInputDay = a)
                                                                {
                                                                    cout << " This is the status of flight " << z << " : " << flightArray[z] << endl;
                                                                    cout << " Flight " << z << " has " << flightArray[z] << " seats available." << endl;
                                                                   
                                                                }
                                                        }
                                                }
                                        }
        
                                }

                }
                                                    cout << "********************************************************************************";
                                                    cout << "**************************column*A**********column*B**********column*c**********";
                                                    cout << "********************************************************************************";
                                                    cout << "*****row*1*****************seat*A1**********seat*B1***********seat*C1***********";
                                                    cout << "*****row*2*****************pilotSeat********seat*B2***********seat*C2***********";
                                                    cout << "********************************************************************************";
                                                    cout << "********************************************************************************";
                                                    cout << "********************************************************************************";
                
                
        }
        
        
}


int main()
{
int pricesArray[];
for(int b = 0; b <= 4; b++)
{
pricesArray[b] = 150;

}
for(int b = 4; b <= 16; b++)
{
pricesArray[b] = 120;

}

for(int b = 16; b <= 28; b++)
{
pricesArray[b] = 90;

}
}