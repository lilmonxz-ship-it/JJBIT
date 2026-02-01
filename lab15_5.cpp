#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 



void shuffle(int *a, int *b, int *c, int *d){
    int l[] = {*a, *b, *c, *d};
        for(int i = 0; i < 4; i++){
            int ran = rand() % 4;
            int t = l[i];
		l[i] = l[ran];
		l[ran] = t;
        }
    *a = l[0];
	*b = l[1];
	*c = l[2];
	*d = l[3];
    
}
