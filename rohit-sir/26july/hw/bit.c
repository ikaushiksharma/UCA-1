#include<stdbool.h>
int cntSetBits(int a){
	int count = 0;
    	while (a) {
        	count += a & 1;
        	a >>= 1;
    	}
    	return count;
}

bool isPowOf2(int a){
	return !(a & (a-1));
}

int replaceBitsInRange(int num,int i,int j,int rep){
	int ones=(~0);
        int a=ones<<(j+1);
        int b=(1<<i)-1;
        int mask= a | b;
        int ans=(num & mask)|(rep<<i);
        return ans;
}

