#include <iostream>

using namespace std;

int ** rangeArray;
int **valuesArray;
int n;

int pow(int a, int b)
{
    int ans=1;
    for(int i=0; i<b; i++)
    {
        ans=ans*a;
    }
    return ans;
}

void bvc(int numOfTCusingBVC)
{
    cout<<"Printing test cases for BVC"<<endl<< endl;

    if(n==1)
    {
        cout<<"TID"<<'\t'<<"var"<<n<<endl<<endl;
        int tid=1;
        for(int i=0; i<7; i++)
        {
            if(i!=4 || i!=5)cout<<tid++<<'\t'<<valuesArray[i][0]<<endl;
        }
    }

    else
    {
         cout<<"TID";
         for(int it=0; it<n; it++)
        {
             cout<<'\t'<<"var"<<it+1;
        }

        cout<<endl<<endl;

        int **testCaseArray;
        testCaseArray=new int*[numOfTCusingBVC];

        for(int tc=0; tc<numOfTCusingBVC; tc++)
        {
            testCaseArray[tc]=new int[n];
        }

       int tc=0;
       while(tc!=numOfTCusingBVC-1)
        {
            for(int c=0; c<n; c++)
                for(int k=0; k<4;k++)
                {
                    testCaseArray[tc][c]=valuesArray[k][c];
                    tc++;
                }
        }

       tc=0;
       while(tc!=numOfTCusingBVC-1)
        {
            for(int a=0; a<n; a++)
             {
                for(int k=0; k<4;k++)
                {
                    for(int c=0; c<n; c++)
                    {
                        if(a!=c)
                        {
                            testCaseArray[tc][c]=valuesArray[6][c];
                         //   cout<<a<<" "<< tc <<" "<<c<<" "<<endl<<endl;
                        }
                    }
                    tc++;
                   // cout<<tc<<endl;
                }
            }

            for(int c=0; c<n; c++)
            {
                testCaseArray[numOfTCusingBVC-1][c]=valuesArray[6][c];
            }

        }

     //  cout<<"The test cases"<<endl;
        for(int tc=0; tc<numOfTCusingBVC; tc++)
        {
            cout<<tc+1<<'\t';
              for(int c=0; c<n; c++)
              {
                  cout<<testCaseArray[tc][c]<<'\t';
              }
              cout<<endl;
        }
    }
}

void robust(int numOfTCusingRobust)
{
    cout<<"Printing test cases for robust"<<endl<< endl;

    if(n==1)
    {
        cout<<"TID"<<'\t'<<"var"<<n<<endl<<endl;
        int tid=1;
        for(int i=0; i<7; i++)
        {
             cout<<tid++<<'\t'<<valuesArray[i][0]<<endl;
        }
    }

    else
    {
         cout<<"TID";
         for(int it=0; it<n; it++)
        {
             cout<<'\t'<<"var"<<it+1;
        }

        cout<<endl<<endl;

        int **testCaseArray;
        testCaseArray=new int*[numOfTCusingRobust];

        for(int tc=0; tc<numOfTCusingRobust; tc++)
        {
            testCaseArray[tc]=new int[n];
        }

       int tc=0;
       while(tc!=numOfTCusingRobust-1)
        {
            for(int c=0; c<n; c++)
                for(int k=0; k<6;k++)
                {
                    testCaseArray[tc][c]=valuesArray[k][c];
                    tc++;
                }
        }

       tc=0;
       while(tc!=numOfTCusingRobust-1)
        {
            for(int a=0; a<n; a++)
             {
                for(int k=0; k<6;k++)
                {
                    for(int c=0; c<n; c++)
                    {
                        if(a!=c)
                        {
                            testCaseArray[tc][c]=valuesArray[6][c];
                         //   cout<<a<<" "<< tc <<" "<<c<<" "<<endl<<endl;
                        }
                    }
                    tc++;
                   // cout<<tc<<endl;
                }
            }

            for(int c=0; c<n; c++)
            {
                testCaseArray[numOfTCusingRobust-1][c]=valuesArray[6][c];
            }
        }

       //cout<<"The test cases"<<endl;
        for(int tc=0; tc<numOfTCusingRobust; tc++)
        {
               cout<<tc+1<<'\t';
               for(int c=0; c<n; c++)
              {
                  cout<<testCaseArray[tc][c]<<'\t';
              }
              cout<<endl;
        }
    }
}

void worstCase(int numOfTCusingWC)
{
    cout<<"Printing test cases for worst case testing"<< endl<<endl;

    if(n==1)
    {
        cout<<"TID"<<'\t'<<"var"<<n<<endl<<endl;
        int tid=1;
        for(int i=0; i<7; i++)
        {
            cout<<tid++<<'\t'<<valuesArray[i][0]<<endl;
        }
    }

    else
    {
         cout<<"TID";
         for(int it=0; it<n; it++)
        {
             cout<<'\t'<<"var"<<it+1;
        }

        cout<<endl<<endl;

        int **testCaseArray;
        testCaseArray=new int*[numOfTCusingWC];

        for(int tc=0; tc<numOfTCusingWC; tc++)
        {
            testCaseArray[tc]=new int[n];
        }

        int nn=n;

//    cout<<numOfTCusingWC<<"******"<<endl;

        for(int col=0; col<n; col++)
        {
            int tc2=0;
            if(nn>0)
            {
                int times=pow(5,nn-1);

               while(tc2!=numOfTCusingWC)
               {
                   for(int row=0; row<7; row++)
                {
                    //cout<<"eikhane????   "<<valuesArray[row][col]<<endl;
                    if(row!=4 && row!=5)
                    for(int t=0;t<times;t++)
                    {
                        testCaseArray[tc2++][col] = valuesArray[row][col];
                        // cout<<valuesArray[row][col]<<endl;
                         //cout<<"tc   "<<tc<<endl;
                       // cout<<testCaseArray[tc][col]<<endl;
                    }
                }

               }


            }

             nn=nn-1;
        }

      // cout<<"The test cases"<<endl;
        for(int tc=0; tc<numOfTCusingWC; tc++)
        {
               cout<<tc+1<<'\t';
               for(int c=0; c<n; c++)
              {
                  cout<<testCaseArray[tc][c]<<'\t';
              }
              cout<<endl;
        }
    }


}


int main(){

    cout<<"Enter the number of variables: "<<endl;
    cin>>n;

    cout<<"number of variables: " <<n<<endl;

    rangeArray=new int* [n];
    for(int j=0; j<n; j++)
    {
        rangeArray[j]= new int[2];
    }

    int lowerBound, upperBound;
    for(int i=0; i<n; i++)
    {


        cout<<"Enter range of variable "<< i+1 << ": ";
        cin>>lowerBound>>upperBound;
      //  cout<<lowerBound<<upperBound;

        rangeArray[i][0]=lowerBound;
        rangeArray[i][1]=upperBound;
    }

    valuesArray=new int* [7];

    for(int j=0; j<7; j++)
    {
        valuesArray[j]= new int[n];
    }

    for(int j=0; j<n; j++)
    {
        valuesArray[0][j] = rangeArray[j][0];
        valuesArray[1][j] = rangeArray[j][0]+1;//min+
        valuesArray[2][j] = rangeArray[j][1];
        valuesArray[3][j] = rangeArray[j][1]-1;//max-
        valuesArray[4][j] = rangeArray[j][0]-1;//min-
        valuesArray[5][j] = rangeArray[j][1]+1;//max+
        valuesArray[6][j] = (rangeArray[j][0]+rangeArray[j][1])/2; //nom

    }

    cout<<endl<<"Printing valuesArray"<< endl;
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<n; j++)
        {
             cout<<valuesArray[i][j]<<"     ";

             if(j==n-1)
             {
                 cout<<endl;
             }
        }
    }

    int numOfTCusingBVC = 4*n+1;
    cout<<endl<<"Test cases using BVC: "<<numOfTCusingBVC<<endl<<endl;
    bvc(numOfTCusingBVC);

    int numOfTCusingRobust = 6*n+1;
    cout<<endl<<"Test cases using Robust Testing: "<<numOfTCusingRobust<<endl<<endl;
    robust(numOfTCusingRobust);

    int numOfTCusingWC = pow(5,n) ;
    cout<<endl<<"Test cases using Worst Case Testing: "<<numOfTCusingWC<<endl<<endl;
    worstCase(numOfTCusingWC);


    return 0;


}
