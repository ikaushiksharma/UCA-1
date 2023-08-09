#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int make_same_size(char** a,char** b){
	int length_a=strlen(*a);
	int length_b=strlen(*b);

	if(length_a<length_b){
		char* str_a=(char*)malloc((length_b+1)*sizeof(char));
		for(int i=0;i<length_b-length_a;i++){
			str_a[i]='0';
		}
		for(int i=length_b-length_a;i<length_b;i++){
			str_a[i]=(*a)[i-(length_b-length_a)];
		}
		str_a[length_b]='\0';
		*a=str_a;
	}else if(length_a>length_b){
                char* str_b=(char*)malloc((length_a+1)*sizeof(char));
                for(int i=0;i<length_a-length_b;i++){
                        str_b[i]='0';
                }
                for(int i=length_a-length_b;i<length_a;i++){
                        str_b[i]=(*b)[i-(length_a-length_b)];
                }
                str_b[length_a]='\0';
                *b=str_b;
	}
	return strlen(*a);
}

char* get_sub_string(char* a,int start,int end){
	char* sub_string=(char*)malloc(sizeof(char)*(end-start+2));

	for(int i=start;i<=end;i++){
		sub_string[i-start]=a[i];
	}
	sub_string[end-start+1]='\0';
	return sub_string;
}

char* add_bit_string(char* a,char*b){
	int length=make_same_size(&a,&b);
	char* result=(char*)malloc(sizeof(char)*(length+2));
	int carry=0;
	int bit_a=0;
	int bit_b=0;
	while(length>0){
		bit_a=a[length-1]-'0';
		bit_b=a[length-1]-'0';
		int temp=carry+bit_a+bit_b;
		if(temp>=2){
			carry=1;
			temp=temp%2;
		}else{
			carry=0;
		}
		result[length]=temp+'0';
		length--;
	}
	if(carry==1) result[0]='1';
	else{
		for(int i=0;i<strlen(result)-1;i++){
			result[i]=result[i+1];
		}
	}
	result[strlen(result)-1]='\0';
	return result;
}

long int fast_multiply(char* a,char* b){
	int length=make_same_size(&a,&b);
	if(length==0) return 0;
	if(length==1) return (a[0]-'0')*(b[0]-'0');
	int n_left_bits=length/2;
	int n_right_bits=length-n_left_bits;
	
	char* a_left=get_sub_string(a,0,n_left_bits-1);
	char* a_right=get_sub_string(a,n_left_bits,length-1);
	char* b_left=get_sub_string(b,0,n_left_bits-1);
        char* b_right=get_sub_string(b,n_left_bits,length-1);
	long int A=fast_multiply(a_left,b_left);
	long int B=fast_multiply(a_right,b_right);
	long int C=fast_mutiply(add_bit_string(a_left,a_right),add_bit_string(b_left,b_right));
	return A*(1<<(2*n_right_bits)+(C-A-B); 
}
int main(){
	char* s1="010";
	char* s2="110";
	assert(make_same_size(&s1,&s2)==3);
	s1="10";
        s2="110";
        assert(make_same_size(&s1,&s2)==3);
	assert(strcmp(s1,"010")==0);
	s1="010";
        s2="10";
        assert(make_same_size(&s1,&s2)==3);
	assert(strcmp(s2,"010")==0);

	s1="1100011";
	assert(strcmp(get_sub_string(s1,0,4),"11000")==0);
	assert(strcmp(get_sub_string(s1,2,4),"000")==0);
	s1="01";
	s2="10";
	assert(strcmp(add_bit_string(s1,s2),"11")==0);
	s1="11";
	s2="10";
	assert(strcmp(add_bit_string(s1,s2),"101")==0);
	return 0;
}
