
#include <stdio.h>
#include <time.h>
int age(int y,int x);
int main (){
	time_t currentTime;
    struct tm* localTime;

    // Obtain the current system time
    currentTime = time(NULL);

    // Convert the system time to the local time
    localTime = localtime(&currentTime);

    // Extract the date components
    int thisyear = localTime->tm_year + 1900;  // Year since 1900
	int day,mouth,year;
	printf("Dogum tarihinizi giriniz (gg/aa/yy):");
	scanf("%d/%d/%d",&day,&mouth,&year);
	printf("Yasiniz: %d",age(year,thisyear));
	return 0;
}

int age(int y,int x){
	int age;
	age=x-y;	
	return age;
	
}
