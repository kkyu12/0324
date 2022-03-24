#include <stdio.h>

int plus(int a, int b) {
	int result;
	result = a + b;
	return result;
}
int minus(int a, int b) {
	int result;
	result = a - b;
	return result;
}

int mul(int a, int b) {
	int result;
	result = a * b;
	return result;
}

int div(int a, int b) {
	int result;
	result = a / b;
	return result;
}

int powA(int a, int b) {
	int result=1;
	for (int i=1;i<=b;i++){
		result *=a;
	}
	return result;
}

int main()
{
	int returnData1,returnData2,returnData3,returnData4,returnData5;
	returnData1=plus(10,20);
	returnData2=minus(20,10);
	returnData3=mul(10,20);
	returnData4=div(20,10);
	returnData5=powA(2,10);
	printf("%d\n %d\n %d\n %d\n %d\n",returnData1,returnData2,returnData3,returnData4,returnData5);
	return 0;
}
