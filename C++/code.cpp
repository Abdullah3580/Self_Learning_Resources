#include<iostream>
using namespace std;

int findSum(int i,int j,int mat[6][6])
{
    int total = 0;
    int x = i + 2;
    int y = j + 2;
    for( ; i <= x; i++)
    {
        for( ; j <= y ; j++)
        {
            if(i!=(x-1))
            {
                total = total + mat[i][j];
            }
            if((i==(x-1)) && (j==(y-1)))
            {
                total = total + mat[i][j];
            }
        }
    }
    //cout << total << " ";
    return total;
}

int main(){
    int sum;
    //int arr[6][6];
    // for(int i = 0; i < 6; i++)
    // {
    //     for(int j = 0; j < 6; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    int arr[6][6] = {
        {1, 1, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0}
    };


    for (int i = 0; i < 6; i ++)
    {
        for(int j = 0 ; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }

    cout << endl ;cout << endl ;cout << endl ;





    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            int s = findSum(i,j,arr);
            cout << s << "// ";
            if (s > sum ) sum = s;
        } cout << endl;
    }
    //cout << sum;
}

