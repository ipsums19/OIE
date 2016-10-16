#include<iostream>
#include<vector>

using namespace std;

void descomprimir(int index, int v[])
{
    cout << index<<"=";
    int count = 0;
    for(int i = 0; i < 25 and index > 1; ++i, count = 0)
    {
        while(index%v[i]==0)
        {
            index /=v[i];
            count++;
        }
        if(count > 0)
        {
            cout << v[i];
            if(count > 1)
                cout << v[i] << '^' << count;
            if(index > 2)
                cout << '*';
        }
    }
    cout <<endl;
}

int main()
{
    int n;
    cin >> n;
    int v[25] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 , 53 , 59 , 61 , 67,
    71 , 73 , 79 , 83 , 89 , 9};
    int index;
    for(int i = 0; i<n; ++i)
    {
        cin >> index;
        descomprimir(index, v);
    }
}
