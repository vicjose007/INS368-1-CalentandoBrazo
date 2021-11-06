#include <iostream>
 
using namespace std;

void intersection(int n1[], int n2[]);
 
int main()
{   
    int n1[3] = {3,1,2};
    int n2[4] = {2,2,1,5};

    intersection(n1 , n2);

}
void intersection(int n1[], int n2[])
{
    int UNum[3];
    int contador = 0;

    for(int i = 0; i < 3; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if(n1[i] == n1[j])
            {
                break;
            }
        }
        if(j = i)
        {
            UNum[contador]= n1[i];
            contador++;
        }

    }
    for(int i = 0; i < contador; i++)
    {
        bool intersection = false;
        for(int j = 0; j < 4; j++)
        {
            if(UNum[i]== n2[j])
            {
                intersection = true;
            }
        }
        if(intersection)
        {
            cout << UNum[i] << ", ";
        }
    }
}