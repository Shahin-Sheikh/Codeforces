/*If n can be written as 2x or 4x, where x is a square number, then the answer is YES. Otherwise it is NO.

To visualize this construction, we start by first building a smaller square using exactly 2 or 4 pieces (the drawings are in the sample test explanation). We can just use x of those smaller squares to build a larger square.

Let's prove that there are no other answers (although this isn't necessary to solve the problem). Let's define each triangle piece to have a short side of length 1 and a longer side of length 2–√. Consider one side of the square, and suppose that it has a triangles on the short side and b triangles on the longer side. The side length will be a+2–√b. The area of the square is a rational number because the area of each triangle piece is rational. So, (a+2–√b)2 has to be rational, which means either a is 0, or b is 0. If either is 0, we can use the construction in the previous paragraph.

Time complexity for each test case: O(n−−√) or O(logn) (depends on how you check for square numbers)*/
#include <bits/stdc++.h>
using namespace std;

bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

void run_case(){
  int n;
  cin>>n;
  if (n%2==0 && isSquare(n/2))
    cout<<"YES"<<endl;
  else if (n%4==0 && isSquare(n/4))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}

int main(){
  int tests; 
  cin>>tests;
  while (tests--)
    run_case();
}