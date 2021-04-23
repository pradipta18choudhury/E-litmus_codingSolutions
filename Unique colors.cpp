#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,s,c=1;
  cin>>n>>s;
  
  int V[n],C[n];
  for(int i=0;i<n;i++)
  {
   for(int j=i+1;j<n;j++)
   {
    if(V[i]-V[j]>s || V[j]-V[i]>s)
    {
     i=j;
      c++;
    }
   }
  }
  cout<<c<<endl;
  return 0;
}

/*********
there are n boxes with each box i has value V[i]. these boxes are colorless initially and you are supposed to print each box with same color.
but as always there are few conditions which you need to follow while painting the boxes.
1. for two boxes i and j (i<j) with color c1, there is no box(i<k<j) which does't have color c1,
2. for all the boxes with same color, the difference between minimum and maximum value of box is no more than s.

colors are costly and using so many colors might look ugly.
what is the minimum no of colors that you need to paint all the boxes while satisfying the above conditions?
*********/
