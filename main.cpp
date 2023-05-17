#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
#define SIZE 100

int main(int argc, char **argv){
  int i,n,*a;
			n=argc-1;
 		     a=new int[n];
			for(i=0;i<n;i++) {
			    a[i]=atoi(argv[i+1]);
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

  int*p=a;
  int*pb=a+n-1;
  int temp;
  for (i = 0; i < n/ 2; i++) {

    temp = *p;
    *p = *pb;
    *pb = temp;
    p++;
    pb--;
  }
  p=a;
  cout<<"reverse"<<endl;
  for(i=0;i<n;i++) {
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
  }
 delete [] p;  
}


